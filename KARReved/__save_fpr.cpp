//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __save_fpr(PPC::Runtime::GCContext* context)
{
# .text: //this is a jump label 0x68 | 0x803ADA88 | size : 0x0
.sym _savefpr_14 , global
/*803ADA88 003AA888*/ PPC::Runtime::ASM::stfd(context->f14, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r11));
# .text: //this is a jump label 0x6C | 0x803ADA8C | size : 0x0
.sym _savefpr_15 , global
/*803ADA8C 003AA88C*/ PPC::Runtime::ASM::stfd(context->f15, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x88, context->r11));
# .text: //this is a jump label 0x70 | 0x803ADA90 | size : 0x0
.sym _savefpr_16 , global
/*803ADA90 003AA890*/ PPC::Runtime::ASM::stfd(context->f16, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r11));
# .text: //this is a jump label 0x74 | 0x803ADA94 | size : 0x0
.sym _savefpr_17 , global
/*803ADA94 003AA894*/ PPC::Runtime::ASM::stfd(context->f17, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x78, context->r11));
# .text: //this is a jump label 0x78 | 0x803ADA98 | size : 0x0
.sym _savefpr_18 , global
/*803ADA98 003AA898*/ PPC::Runtime::ASM::stfd(context->f18, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r11));
# .text: //this is a jump label 0x7C | 0x803ADA9C | size : 0x0
.sym _savefpr_19 , global
/*803ADA9C 003AA89C*/ PPC::Runtime::ASM::stfd(context->f19, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x68, context->r11));
# .text: //this is a jump label 0x80 | 0x803ADAA0 | size : 0x0
.sym _savefpr_20 , global
/*803ADAA0 003AA8A0*/ PPC::Runtime::ASM::stfd(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r11));
# .text: //this is a jump label 0x84 | 0x803ADAA4 | size : 0x0
.sym _savefpr_21 , global
/*803ADAA4 003AA8A4*/ PPC::Runtime::ASM::stfd(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x58, context->r11));
# .text: //this is a jump label 0x88 | 0x803ADAA8 | size : 0x0
.sym _savefpr_22 , global
/*803ADAA8 003AA8A8*/ PPC::Runtime::ASM::stfd(context->f22, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r11));
# .text: //this is a jump label 0x8C | 0x803ADAAC | size : 0x0
.sym _savefpr_23 , global
/*803ADAAC 003AA8AC*/ PPC::Runtime::ASM::stfd(context->f23, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x48, context->r11));
# .text: //this is a jump label 0x90 | 0x803ADAB0 | size : 0x0
.sym _savefpr_24 , global
/*803ADAB0 003AA8B0*/ PPC::Runtime::ASM::stfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r11));
# .text: //this is a jump label 0x94 | 0x803ADAB4 | size : 0x0
.sym _savefpr_25 , global
/*803ADAB4 003AA8B4*/ PPC::Runtime::ASM::stfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r11));
# .text: //this is a jump label 0x98 | 0x803ADAB8 | size : 0x0
.sym _savefpr_26 , global
/*803ADAB8 003AA8B8*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r11));
# .text: //this is a jump label 0x9C | 0x803ADABC | size : 0x0
.sym _savefpr_27 , global
/*803ADABC 003AA8BC*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r11));
# .text: //this is a jump label 0xA0 | 0x803ADAC0 | size : 0x0
.sym _savefpr_28 , global
/*803ADAC0 003AA8C0*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r11));
# .text: //this is a jump label 0xA4 | 0x803ADAC4 | size : 0x0
.sym _savefpr_29 , global
/*803ADAC4 003AA8C4*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r11));
# .text: //this is a jump label 0xA8 | 0x803ADAC8 | size : 0x0
.sym _savefpr_30 , global
/*803ADAC8 003AA8C8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r11));
# .text: //this is a jump label 0xAC | 0x803ADACC | size : 0x0
.sym _savefpr_31 , global
/*803ADACC 003AA8CC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r11));
/*803ADAD0 003AA8D0*/ PPC::Runtime::ASM::blr();
}