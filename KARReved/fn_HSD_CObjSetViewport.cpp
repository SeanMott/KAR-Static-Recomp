//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_CObjSetViewport(PPC::Runtime::GCContext* context)
{
/*80402DE8 003FFBE8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80402DEC 003FFBEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80402DF0 003FFBF0*/ PPC::Runtime::ASM::beq(.L_80402E6C);
/*80402DF4 003FFBF4*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80402DF8 003FFBF8*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*80402DFC 003FFBFC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80402E00 003FFC00*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80402E04 003FFC04*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5A68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80402E08 003FFC08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80402E0C 003FFC0C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80402E10 003FFC10*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80402E14 003FFC14*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80402E18 003FFC18*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80402E1C 003FFC1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80402E20 003FFC20*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80402E24 003FFC24*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80402E28 003FFC28*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80402E2C 003FFC2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80402E30 003FFC30*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80402E34 003FFC34*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80402E38 003FFC38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80402E3C 003FFC3C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80402E40 003FFC40*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80402E44 003FFC44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80402E48 003FFC48*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80402E4C 003FFC4C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80402E50 003FFC50*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80402E54 003FFC54*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*80402E58 003FFC58*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80402E5C 003FFC5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80402E60 003FFC60*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80402E64 003FFC64*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80402E68 003FFC68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80402E6C, 0x80402E6C) //this is a jump label
/*80402E6C 003FFC6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80402E70 003FFC70*/ PPC::Runtime::ASM::blr();
}