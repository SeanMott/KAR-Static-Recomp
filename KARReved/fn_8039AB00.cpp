//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8039AB00(PPC::Runtime::GCContext* context)
{
/*8039AB00 00397900*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039AB04 00397904*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039AB08 00397908*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039AB0C 0039790C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039AB10 00397910*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039AB14 00397914*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039AB18 00397918*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8039AB1C 0039791C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039AB20 00397920*/ PPC::Runtime::ASM::bctrl();
/*8039AB24 00397924*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039AB28 00397928*/ PPC::Runtime::ASM::beq(.L_8039AB34);
/*8039AB2C 0039792C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5018 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039AB30 00397930*/ PPC::Runtime::ASM::b(.L_8039AB4C);
RUNTIME_PPC_JUMP_LABEL(.L_8039AB34, 0x8039AB34) //this is a jump label
/*8039AB34 00397934*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039AB38 00397938*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8039AB3C 0039793C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8039AB40 00397940*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x4);
/*8039AB44 00397944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039AB48 00397948*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8039AB4C, 0x8039AB4C) //this is a jump label
/*8039AB4C 0039794C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039AB50 00397950*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039AB54 00397954*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039AB58 00397958*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039AB5C 0039795C*/ PPC::Runtime::ASM::blr();
}