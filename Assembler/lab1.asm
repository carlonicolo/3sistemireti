; Esercizio dimostrazione funzionamento mov
; multi-segment executable file template.

data segment
    ; add your data here!
    base db 10    ; dato tipo byte
    altezza dw 12 ; dato word 2byte
    
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
    
    ; Primo esempio funzionamento mov
    ;mov ax,256
    ;mov ah,255
    ;mov bx,65535        
    
    ; sposto il valore di un registra in un altro registro
    mov ax,5
    mov bx,6
    mov ax,bx
    
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
