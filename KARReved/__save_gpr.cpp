//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __save_gpr(PPC::Runtime::GCContext* context)
{
# .text: //this is a jump label 0x100 | 0x803ADB20 | size : 0x0
.sym _savegpr_14 , global
/*803ADB20 003AA920*/ PPC::Runtime::ASM::stw(context->r14, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x48, context->r11));
# .text: //this is a jump label 0x104 | 0x803ADB24 | size : 0x0
.sym _savegpr_15 , global
/*803ADB24 003AA924*/ PPC::Runtime::ASM::stw(context->r15, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x44, context->r11));
# .text: //this is a jump label 0x108 | 0x803ADB28 | size : 0x0
.sym _savegpr_16 , global
/*803ADB28 003AA928*/ PPC::Runtime::ASM::stw(context->r16, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r11));
# .text: //this is a jump label 0x10C | 0x803ADB2C | size : 0x0
.sym _savegpr_17 , global
/*803ADB2C 003AA92C*/ PPC::Runtime::ASM::stw(context->r17, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x3c, context->r11));
# .text: //this is a jump label 0x110 | 0x803ADB30 | size : 0x0
.sym _savegpr_18 , global
/*803ADB30 003AA930*/ PPC::Runtime::ASM::stw(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r11));
# .text: //this is a jump label 0x114 | 0x803ADB34 | size : 0x0
.sym _savegpr_19 , global
/*803ADB34 003AA934*/ PPC::Runtime::ASM::stw(context->r19, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x34, context->r11));
# .text: //this is a jump label 0x118 | 0x803ADB38 | size : 0x0
.sym _savegpr_20 , global
/*803ADB38 003AA938*/ PPC::Runtime::ASM::stw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r11));
# .text: //this is a jump label 0x11C | 0x803ADB3C | size : 0x0
.sym _savegpr_21 , global
/*803ADB3C 003AA93C*/ PPC::Runtime::ASM::stw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2c, context->r11));
# .text: //this is a jump label 0x120 | 0x803ADB40 | size : 0x0
.sym _savegpr_22 , global
/*803ADB40 003AA940*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r11));
# .text: //this is a jump label 0x124 | 0x803ADB44 | size : 0x0
.sym _savegpr_23 , global
/*803ADB44 003AA944*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x24, context->r11));
# .text: //this is a jump label 0x128 | 0x803ADB48 | size : 0x0
.sym _savegpr_24 , global
/*803ADB48 003AA948*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r11));
# .text: //this is a jump label 0x12C | 0x803ADB4C | size : 0x0
.sym _savegpr_25 , global
/*803ADB4C 003AA94C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1c, context->r11));
# .text: //this is a jump label 0x130 | 0x803ADB50 | size : 0x0
.sym _savegpr_26 , global
/*803ADB50 003AA950*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r11));
# .text: //this is a jump label 0x134 | 0x803ADB54 | size : 0x0
.sym _savegpr_27 , global
/*803ADB54 003AA954*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x14, context->r11));
# .text: //this is a jump label 0x138 | 0x803ADB58 | size : 0x0
.sym _savegpr_28 , global
/*803ADB58 003AA958*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r11));
# .text: //this is a jump label 0x13C | 0x803ADB5C | size : 0x0
.sym _savegpr_29 , global
/*803ADB5C 003AA95C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r11));
# .text: //this is a jump label 0x140 | 0x803ADB60 | size : 0x0
.sym _savegpr_30 , global
/*803ADB60 003AA960*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r11));
# .text: //this is a jump label 0x144 | 0x803ADB64 | size : 0x0
.sym _savegpr_31 , global
/*803ADB64 003AA964*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r11));
/*803ADB68 003AA968*/ PPC::Runtime::ASM::blr();
}