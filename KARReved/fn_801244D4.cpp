//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_80112058.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_801244D4(PPC::Runtime::GCContext* context)
{
/*801244D4 001212D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801244D8 001212D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801244DC 001212DC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1081 @ Get_MemoryOffset_HighBit);
/*801244E0 001212E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801244E4 001212E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801244E8 001212E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801244EC 001212EC*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_1081 @ Get_MemoryOffset_LowBit);
/*801244F0 001212F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801244F4 001212F4*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801244F8 001212F8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801244FC 001212FC*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x604);
/*80124500 00121300*/ PPC::Runtime::ASM::bl(fn_80112058);
/*80124504 00121304*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80124508 00121308*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8012450C 0012130C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80124510 00121310*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80124514 00121314*/ PPC::Runtime::ASM::beq(.L_80124544);
/*80124518 00121318*/ PPC::Runtime::ASM::bge(.L_80124560);
/*8012451C 0012131C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80124520 00121320*/ PPC::Runtime::ASM::bge(.L_80124528);
/*80124524 00121324*/ PPC::Runtime::ASM::b(.L_80124560);
RUNTIME_PPC_JUMP_LABEL(.L_80124528, 0x80124528) //this is a jump label
/*80124528 00121328*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012452C 0012132C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80124530 00121330*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*80124534 00121334*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80124538 00121338*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012453C 0012133C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80124540 00121340*/ PPC::Runtime::ASM::b(.L_80124578);
RUNTIME_PPC_JUMP_LABEL(.L_80124544, 0x80124544) //this is a jump label
/*80124544 00121344*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80124548 00121348*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x4);
/*8012454C 0012134C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*80124550 00121350*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80124554 00121354*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80124558 00121358*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8012455C 0012135C*/ PPC::Runtime::ASM::b(.L_80124578);
RUNTIME_PPC_JUMP_LABEL(.L_80124560, 0x80124560) //this is a jump label
/*80124560 00121360*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80124564 00121364*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x8);
/*80124568 00121368*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x38);
/*8012456C 0012136C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80124570 00121370*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80124574 00121374*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_80124578, 0x80124578) //this is a jump label
/*80124578 00121378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012457C 0012137C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80124580 00121380*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80124584 00121384*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124588 00121388*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012458C 0012138C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80124590 00121390*/ PPC::Runtime::ASM::blr();
}