; multi-segment executable file template.
; istruzione jn jnz salti condizionali
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
    mov bx,6
ciclo:
    mov ax,5
    add ax,5
    dec bx
    cmp bx,0
    jnz ciclo ; salta nel caso in cui non e' zero
    
            
    mov ah, 9
    int 21h        ; output string at ds:dx
    
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
