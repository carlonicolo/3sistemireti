; multi-segment executable file template.
; somma due valori
data segment
    
    somma db ?
    val1 db 5
    val2 db 8
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
    mov al,val1
    mov bl,val2
    add al,bl
    mov somma, al
    
    
    
    
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
