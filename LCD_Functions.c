
void LCD_init(void)
{
  Serial.begin(9600);
  SYSCTL_RCGCGPIO_R |= 0X03;
  
  GPIO_PORTA_DIR_R |= 0XE0;
  GPIO_PORTA_DEN_R |= 0XE0;

  GPIO_PORTB_DIR_R |= 0XFF;
  GPIO_PORTB_DEN_R |= 0XFF;

  LCD_Cmd(0X38);
  LCD_Cmd(0x06);
  LCD_Cmd(0X0F);
  LCD_Cmd(0X01);
}
