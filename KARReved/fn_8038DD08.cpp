//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A07D8.hpp"



void fn_8038DD08(PPC::Runtime::GCContext* context)
{
/*8038DD08 0038AB08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8038DD0C 0038AB0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8038DD10 0038AB10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8038DD14 0038AB14*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038DD18 0038AB18*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*8038DD1C 0038AB1C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*8038DD20 0038AB20*/ PPC::Runtime::ASM::lis(context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8038DD24 0038AB24*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*8038DD28 0038AB28*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4F70 @ Get_MemoryOffset_HighBit);
/*8038DD2C 0038AB2C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8038DD30 0038AB30*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804F4F70 @ Get_MemoryOffset_LowBit);
/*8038DD34 0038AB34*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r0);
/*8038DD38 0038AB38*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8038DD3C 0038AB3C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8038DD40 0038AB40*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8038DD44 0038AB44*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038DD48 0038AB48*/ PPC::Runtime::ASM::fabs(context->f0, context->f31);
/*8038DD4C 0038AB4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8038DD50 0038AB50*/ PPC::Runtime::ASM::frsp(context->f1, context->f0);
/*8038DD54 0038AB54*/ PPC::Runtime::ASM::bl(fn_802A07D8);
/*8038DD58 0038AB58*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DD5C 0038AB5C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8038DD60 0038AB60*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8038DD64 0038AB64*/ PPC::Runtime::ASM::bne(.L_8038DD6C);
/*8038DD68 0038AB68*/ PPC::Runtime::ASM::b(.L_8038DD70);
RUNTIME_PPC_JUMP_LABEL(.L_8038DD6C, 0x8038DD6C) //this is a jump label
/*8038DD6C 0038AB6C*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8038DD70, 0x8038DD70) //this is a jump label
/*8038DD70 0038AB70*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*8038DD74 0038AB74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8038DD78 0038AB78*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038DD7C 0038AB7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8038DD80 0038AB80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8038DD84 0038AB84*/ PPC::Runtime::ASM::blr();
}