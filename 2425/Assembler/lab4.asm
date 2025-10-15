; multi-segment executable file template.
; div command divisione
data segment
    
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
; set segment registers:
    mov ax, data
    mov ds, ax
    mov es, ax

    ; add your code here
    
    mov ax,10
    mov bl,2
    div bl
    
    mov ax,10
    mov bl,3
    div bl
    
    mov ax,512
    mov bl,2
    div bl
    
    mov ax,10
    mov bx,2
    div bx        
    
    
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
