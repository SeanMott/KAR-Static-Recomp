//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_SIGetStatus.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_SIGetResponse(PPC::Runtime::GCContext* context)
{
/*803E9608 003E6408*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E960C 003E640C*/ PPC::Runtime::ASM::lis(context->r5, Packet_8056E728 @ Get_MemoryOffset_HighBit);
/*803E9610 003E6410*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E9614 003E6414*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803E9618 003E6418*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E961C 003E641C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803E9620 003E6420*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*803E9624 003E6424*/ PPC::Runtime::ASM::addi(context->r28, context->r5, Packet_8056E728 @ Get_MemoryOffset_LowBit);
/*803E9628 003E6428*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803E962C 003E642C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803E9630 003E6430*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803E9634 003E6434*/ PPC::Runtime::ASM::bl(fn_SIGetStatus);
/*803E9638 003E6438*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 26, 26);
/*803E963C 003E643C*/ PPC::Runtime::ASM::beq(.L_803E9678);
/*803E9640 003E6440*/ PPC::Runtime::ASM::mulli(context->r4, context->r29, 0xc);
/*803E9644 003E6444*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803E9648 003E6448*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6400);
/*803E964C 003E644C*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*803E9650 003E6450*/ PPC::Runtime::ASM::slwi(context->r3, context->r29, 3);
/*803E9654 003E6454*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803E9658 003E6458*/ PPC::Runtime::ASM::add(context->r5, context->r28, context->r3);
/*803E965C 003E645C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r5));
/*803E9660 003E6460*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*803E9664 003E6464*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*803E9668 003E6468*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803E966C 003E646C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803E9670 003E6470*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r5));
/*803E9674 003E6474*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803E9678, 0x803E9678) //this is a jump label
/*803E9678 003E6478*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*803E967C 003E647C*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*803E9680 003E6480*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r3));
/*803E9684 003E6484*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E9688 003E6488*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*803E968C 003E648C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r3));
/*803E9690 003E6490*/ PPC::Runtime::ASM::beq(.L_803E96AC);
/*803E9694 003E6494*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 3);
/*803E9698 003E6498*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*803E969C 003E649C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r3));
/*803E96A0 003E64A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803E96A4 003E64A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r3));
/*803E96A8 003E64A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803E96AC, 0x803E96AC) //this is a jump label
/*803E96AC 003E64AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E96B0 003E64B0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E96B4 003E64B4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803E96B8 003E64B8*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E96BC 003E64BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803E96C0 003E64C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803E96C4 003E64C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E96C8 003E64C8*/ PPC::Runtime::ASM::blr();
}