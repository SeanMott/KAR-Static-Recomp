//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80236C40.hpp"
#include "fn_8006E07C.hpp"
#include "fn_80236914.hpp"



void fn_8020D30C(PPC::Runtime::GCContext* context)
{
/*8020D30C 0020A10C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8020D310 0020A110*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020D314 0020A114*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8020D318 0020A118*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8020D31C 0020A11C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8020D320 0020A120*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020D324 0020A124*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8020D328 0020A128*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020D32C 0020A12C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8020D330 0020A130*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020D334 0020A134*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8020D338 0020A138*/ PPC::Runtime::ASM::beq(.L_8020D3F0);
/*8020D33C 0020A13C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*8020D340 0020A140*/ PPC::Runtime::ASM::bne(.L_8020D350);
/*8020D344 0020A144*/ PPC::Runtime::ASM::lis(context->r3, 0x6);
/*8020D348 0020A148*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x5a61);
/*8020D34C 0020A14C*/ PPC::Runtime::ASM::b(.L_8020D374);
RUNTIME_PPC_JUMP_LABEL(.L_8020D350, 0x8020D350) //this is a jump label
/*8020D350 0020A150*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x2);
/*8020D354 0020A154*/ PPC::Runtime::ASM::bne(.L_8020D364);
/*8020D358 0020A158*/ PPC::Runtime::ASM::lis(context->r3, 0x6);
/*8020D35C 0020A15C*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x5a60);
/*8020D360 0020A160*/ PPC::Runtime::ASM::b(.L_8020D374);
RUNTIME_PPC_JUMP_LABEL(.L_8020D364, 0x8020D364) //this is a jump label
/*8020D364 0020A164*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x3);
/*8020D368 0020A168*/ PPC::Runtime::ASM::bne(.L_8020D374);
/*8020D36C 0020A16C*/ PPC::Runtime::ASM::lis(context->r3, 0x6);
/*8020D370 0020A170*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x5a5f);
RUNTIME_PPC_JUMP_LABEL(.L_8020D374, 0x8020D374) //this is a jump label
/*8020D374 0020A174*/ PPC::Runtime::ASM::lis(context->r3, 0x6);
/*8020D378 0020A178*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x5a61);
/*8020D37C 0020A17C*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8020D380 0020A180*/ PPC::Runtime::ASM::blt(.L_8020D3F0);
/*8020D384 0020A184*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x5a5f);
/*8020D388 0020A188*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8020D38C 0020A18C*/ PPC::Runtime::ASM::bgt(.L_8020D3F0);
/*8020D390 0020A190*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8020D394 0020A194*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*8020D398 0020A198*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa3c, context->r30));
/*8020D39C 0020A19C*/ PPC::Runtime::ASM::addi(context->r8, context->r30, 0x2f8);
/*8020D3A0 0020A1A0*/ PPC::Runtime::ASM::li(context->r6, 0x1fe);
/*8020D3A4 0020A1A4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8020D3A8 0020A1A8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8020D3AC 0020A1AC*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*8020D3B0 0020A1B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa74, context->r30));
/*8020D3B4 0020A1B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8020D3B8 0020A1B8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa70, context->r30));
/*8020D3BC 0020A1BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa70, context->r30));
/*8020D3C0 0020A1C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa74, context->r30));
/*8020D3C4 0020A1C4*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*8020D3C8 0020A1C8*/ PPC::Runtime::ASM::xor(context->r4, context->r3, context->r4);
/*8020D3CC 0020A1CC*/ PPC::Runtime::ASM::or.(context->r0, context->r4, context->r0);
/*8020D3D0 0020A1D0*/ PPC::Runtime::ASM::beq(.L_8020D3F0);
/*8020D3D4 0020A1D4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8020D3D8 0020A1D8*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*8020D3DC 0020A1DC*/ PPC::Runtime::ASM::bl(fn_8006E07C);
/*8020D3E0 0020A1E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa70, context->r30));
/*8020D3E4 0020A1E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa74, context->r30));
/*8020D3E8 0020A1E8*/ PPC::Runtime::ASM::bl(fn_80236914);
/*8020D3EC 0020A1EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8020D3F0, 0x8020D3F0) //this is a jump label
/*8020D3F0 0020A1F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8020D3F4 0020A1F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020D3F8 0020A1F8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020D3FC 0020A1FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020D400 0020A200*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020D404 0020A204*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020D408 0020A208*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8020D40C 0020A20C*/ PPC::Runtime::ASM::blr();
}