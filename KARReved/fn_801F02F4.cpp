//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801E40E4.hpp"
#include "fn_801CA00C.hpp"



void fn_801F02F4(PPC::Runtime::GCContext* context)
{
/*801F02F4 001ED0F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801F02F8 001ED0F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F02FC 001ED0FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F0300 001ED100*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F0304 001ED104*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F0308 001ED108*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801F030C 001ED10C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*801F0310 001ED110*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801F0314 001ED114*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*801F0318 001ED118*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F031C 001ED11C*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*801F0320 001ED120*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*801F0324 001ED124*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0328 001ED128*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801F032C 001ED12C*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*801F0330 001ED130*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*801F0334 001ED134*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801F0338 001ED138*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801F033C 001ED13C*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801F0340 001ED140*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801F0344 001ED144*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*801F0348 001ED148*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*801F034C 001ED14C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*801F0350 001ED150*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*801F0354 001ED154*/ PPC::Runtime::ASM::mr(context->r7, context->r31);
/*801F0358 001ED158*/ PPC::Runtime::ASM::bl(fn_801E40E4);
/*801F035C 001ED15C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*801F0360 001ED160*/ PPC::Runtime::ASM::bl(fn_801CA00C);
/*801F0364 001ED164*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F0368 001ED168*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801F036C 001ED16C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F0370 001ED170*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*801F0374 001ED174*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F0378 001ED178*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F037C 001ED17C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801F0380 001ED180*/ PPC::Runtime::ASM::blr();
}