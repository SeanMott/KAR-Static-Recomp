//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005612C.hpp"
#include "fn_80055ACC.hpp"
#include "fn_800550BC.hpp"
#include "fn_800550F4.hpp"



void fn_800DBD6C(PPC::Runtime::GCContext* context)
{
/*800DBD6C 000D8B6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800DBD70 000D8B70*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DBD74 000D8B74*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x14);
/*800DBD78 000D8B78*/ PPC::Runtime::ASM::slwi(context->r6, context->r3, 3);
/*800DBD7C 000D8B7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DBD80 000D8B80*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DBD84 000D8B84*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4);
/*800DBD88 000D8B88*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*800DBD8C 000D8B8C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DBD90 000D8B90*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*800DBD94 000D8B94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DBD98 000D8B98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800DBD9C 000D8B9C*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800DBDA0 000D8BA0*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800DBDA4 000D8BA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*800DBDA8 000D8BA8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r7));
/*800DBDAC 000D8BAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800DBDB0 000D8BB0*/ PPC::Runtime::ASM::lwzx(context->r31, context->r7, context->r6);
/*800DBDB4 000D8BB4*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r0);
/*800DBDB8 000D8BB8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800DBDBC 000D8BBC*/ PPC::Runtime::ASM::beq(.L_800DBDF8);
/*800DBDC0 000D8BC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800DBDC4 000D8BC4*/ PPC::Runtime::ASM::bl(fn_8005612C);
/*800DBDC8 000D8BC8*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*800DBDCC 000D8BCC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800DBDD0 000D8BD0*/ PPC::Runtime::ASM::bl(fn_80055ACC);
/*800DBDD4 000D8BD4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800DBDD8 000D8BD8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800DBDDC 000D8BDC*/ PPC::Runtime::ASM::li(context->r4, 0x400);
/*800DBDE0 000D8BE0*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*800DBDE4 000D8BE4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*800DBDE8 000D8BE8*/ PPC::Runtime::ASM::beq(.L_800DBDF8);
/*800DBDEC 000D8BEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800DBDF0 000D8BF0*/ PPC::Runtime::ASM::li(context->r4, 0x400);
/*800DBDF4 000D8BF4*/ PPC::Runtime::ASM::bl(fn_800550F4);
RUNTIME_PPC_JUMP_LABEL(.L_800DBDF8, 0x800DBDF8) //this is a jump label
/*800DBDF8 000D8BF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DBDFC 000D8BFC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DBE00 000D8C00*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DBE04 000D8C04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DBE08 000D8C08*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800DBE0C 000D8C0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DBE10 000D8C10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800DBE14 000D8C14*/ PPC::Runtime::ASM::blr();
}