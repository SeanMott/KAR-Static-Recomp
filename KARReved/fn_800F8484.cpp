//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C1C8.hpp"
#include "fn_800F8344.hpp"
#include "fn_800F8344.hpp"
#include "fn_800F87E4.hpp"
#include "fn_8018C598.hpp"



void fn_800F8484(PPC::Runtime::GCContext* context)
{
/*800F8484 000F5284*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800F8488 000F5288*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F848C 000F528C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F8490 000F5290*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800F8494 000F5294*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800F8498 000F5298*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800F849C 000F529C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800F84A0 000F52A0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800F84A4 000F52A4*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*800F84A8 000F52A8*/ PPC::Runtime::ASM::beq(.L_800F84BC);
/*800F84AC 000F52AC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*800F84B0 000F52B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*800F84B4 000F52B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*800F84B8 000F52B8*/ PPC::Runtime::ASM::b(.L_800F84C8);
RUNTIME_PPC_JUMP_LABEL(.L_800F84BC, 0x800F84BC) //this is a jump label
/*800F84BC 000F52BC*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800F84C0 000F52C0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800F84C4 000F52C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800F84C8, 0x800F84C8) //this is a jump label
/*800F84C8 000F52C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800F84CC 000F52CC*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*800F84D0 000F52D0*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800F84D4 000F52D4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800F84D8 000F52D8*/ PPC::Runtime::ASM::bl(fn_8018C1C8);
/*800F84DC 000F52DC*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*800F84E0 000F52E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800F84E4 000F52E4*/ PPC::Runtime::ASM::beq(.L_800F84F8);
/*800F84E8 000F52E8*/ PPC::Runtime::ASM::lis(context->r4, fn_800F8344 @ Get_MemoryOffset_HighBit);
/*800F84EC 000F52EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800F84F0 000F52F0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_800F8344 @ Get_MemoryOffset_LowBit);
/*800F84F4 000F52F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800F84F8, 0x800F84F8) //this is a jump label
/*800F84F8 000F52F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800F84FC 000F52FC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800F8500 000F5300*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*800F8504 000F5304*/ PPC::Runtime::ASM::beq(.L_800F8564);
/*800F8508 000F5308*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800F850C 000F530C*/ PPC::Runtime::ASM::mr(context->r27, context->r29);
/*800F8510 000F5310*/ PPC::Runtime::ASM::b(.L_800F8548);
RUNTIME_PPC_JUMP_LABEL(.L_800F8514, 0x800F8514) //this is a jump label
/*800F8514 000F5314*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800F8518 000F5318*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F851C 000F531C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*800F8520 000F5320*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r27);
/*800F8524 000F5324*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800F8528 000F5328*/ PPC::Runtime::ASM::bl(fn_800F87E4);
/*800F852C 000F532C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800F8530 000F5330*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800F8534 000F5334*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800F8538 000F5338*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x4);
/*800F853C 000F533C*/ PPC::Runtime::ASM::bl(fn_8018C598);
/*800F8540 000F5340*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x18);
/*800F8544 000F5344*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800F8548, 0x800F8548) //this is a jump label
/*800F8548 000F5348*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800F854C 000F534C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800F8550 000F5350*/ PPC::Runtime::ASM::blt(.L_800F8514);
/*800F8554 000F5354*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r31));
/*800F8558 000F5358*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800F855C 000F535C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*800F8560 000F5360*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800F8564, 0x800F8564) //this is a jump label
/*800F8564 000F5364*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800F8568 000F5368*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800F856C 000F536C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F8570 000F5370*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F8574 000F5374*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800F8578 000F5378*/ PPC::Runtime::ASM::blr();
}