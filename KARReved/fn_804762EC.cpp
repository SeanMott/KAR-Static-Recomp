//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80475590.hpp"
#include "fn_80475590.hpp"
#include "fn_SendAsync.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSSleepThread.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_804762EC(PPC::Runtime::GCContext* context)
{
/*804762EC 004730EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*804762F0 004730F0*/ PPC::Runtime::ASM::lis(context->r6, fn_80475590 @ Get_MemoryOffset_HighBit);
/*804762F4 004730F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*804762F8 004730F8*/ PPC::Runtime::ASM::addi(context->r7, context->r6, fn_80475590 @ Get_MemoryOffset_LowBit);
/*804762FC 004730FC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80476300 00473100*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80476304 00473104*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80476308 00473108*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x14);
/*8047630C 0047310C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80476310 00473110*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*80476314 00473114*/ PPC::Runtime::ASM::bl(fn_SendAsync);
/*80476318 00473118*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047631C 0047311C*/ PPC::Runtime::ASM::bge(.L_80476324);
/*80476320 00473120*/ PPC::Runtime::ASM::b(.L_80476350);
RUNTIME_PPC_JUMP_LABEL(.L_80476324, 0x80476324) //this is a jump label
/*80476324 00473124*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80476328 00473128*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8047632C 0047312C*/ PPC::Runtime::ASM::b(.L_80476338);
RUNTIME_PPC_JUMP_LABEL(.L_80476330, 0x80476330) //this is a jump label
/*80476330 00473130*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x20);
/*80476334 00473134*/ PPC::Runtime::ASM::bl(fn_OSSleepThread);
RUNTIME_PPC_JUMP_LABEL(.L_80476338, 0x80476338) //this is a jump label
/*80476338 00473138*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047633C 0047313C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80476340 00473140*/ PPC::Runtime::ASM::beq(.L_80476330);
/*80476344 00473144*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80476348 00473148*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047634C 0047314C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80476350, 0x80476350) //this is a jump label
/*80476350 00473150*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80476354 00473154*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80476358 00473158*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047635C 0047315C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80476360 00473160*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80476364 00473164*/ PPC::Runtime::ASM::blr();
}