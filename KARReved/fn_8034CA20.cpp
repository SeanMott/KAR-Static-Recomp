//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8034CA20(PPC::Runtime::GCContext* context)
{
/*8034CA20 00349820*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8034CA24 00349824*/ PPC::Runtime::ASM::mflr(context->r0);
/*8034CA28 00349828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8034CA2C 0034982C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8034CA30 00349830*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8034CA34 00349834*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*8034CA38 00349838*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8034CA3C 0034983C*/ PPC::Runtime::ASM::beq(.L_8034CA90);
/*8034CA40 00349840*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*8034CA44 00349844*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8034CA48 00349848*/ PPC::Runtime::ASM::bne(.L_8034CA90);
/*8034CA4C 0034984C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62, context->r31));
/*8034CA50 00349850*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x78);
/*8034CA54 00349854*/ PPC::Runtime::ASM::bge(.L_8034CA7C);
/*8034CA58 00349858*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034CA5C 0034985C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8034CA60 00349860*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB2C0 @ Get_MemoryOffset_SDA21);
/*8034CA64 00349864*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB2B8 @ Get_MemoryOffset_SDA21);
/*8034CA68 00349868*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8034CA6C 0034986C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8034CA70 00349870*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/* 8034CA74 00349874  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*8034CA78 00349878*/ PPC::Runtime::ASM::beq(.L_8034CA90);
RUNTIME_PPC_JUMP_LABEL(.L_8034CA7C, 0x8034CA7C) //this is a jump label
/*8034CA7C 0034987C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6c);
/*8034CA80 00349880*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8034CA84 00349884*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8034CA88 00349888*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8034CA8C 0034988C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8034CA90, 0x8034CA90) //this is a jump label
/*8034CA90 00349890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8034CA94 00349894*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8034CA98 00349898*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8034CA9C 0034989C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8034CAA0 003498A0*/ PPC::Runtime::ASM::blr();
}