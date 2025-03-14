//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "DCInvalidateRange.hpp"
#include "OSDisableInterrupts.hpp"
#include "__DVDPushWaitingQueue.hpp"
#include "stateReady.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_DVDCancelStreamAsync(PPC::Runtime::GCContext* context)
{
/*803C75E4 003C43E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C75E8 003C43E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C75EC 003C43EC*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*803C75F0 003C43F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803C75F4 003C43F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C75F8 003C43F8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803C75FC 003C43FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C7600 003C4400*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803C7604 003C4404*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*803C7608 003C4408*/ PPC::Runtime::ASM::lwz(context->r0, autoInvalidation_805DC8E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C760C 003C440C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C7610 003C4410*/ PPC::Runtime::ASM::beq(.L_803C7640);
/*803C7614 003C4414*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803C7618 003C4418*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*803C761C 003C441C*/ PPC::Runtime::ASM::beq(.L_803C7634);
/*803C7620 003C4420*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x4);
/*803C7624 003C4424*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803C7628 003C4428*/ PPC::Runtime::ASM::ble(.L_803C7634);
/*803C762C 003C442C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xe);
/*803C7630 003C4430*/ PPC::Runtime::ASM::bne(.L_803C7640);
RUNTIME_PPC_JUMP_LABEL(.L_803C7634, 0x803C7634) //this is a jump label
/*803C7634 003C4434*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803C7638 003C4438*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803C763C 003C443C*/ PPC::Runtime::ASM::bl(DCInvalidateRange);
RUNTIME_PPC_JUMP_LABEL(.L_803C7640, 0x803C7640) //this is a jump label
/*803C7640 003C4440*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803C7644 003C4444*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803C7648 003C4448*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803C764C 003C444C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803C7650 003C4450*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*803C7654 003C4454*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C7658 003C4458*/ PPC::Runtime::ASM::bl(__DVDPushWaitingQueue);
/*803C765C 003C445C*/ PPC::Runtime::ASM::lwz(context->r0, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C7660 003C4460*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803C7664 003C4464*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C7668 003C4468*/ PPC::Runtime::ASM::bne(.L_803C767C);
/*803C766C 003C446C*/ PPC::Runtime::ASM::lwz(context->r0, PauseFlag_805DDDB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C7670 003C4470*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C7674 003C4474*/ PPC::Runtime::ASM::bne(.L_803C767C);
/*803C7678 003C4478*/ PPC::Runtime::ASM::bl(stateReady);
RUNTIME_PPC_JUMP_LABEL(.L_803C767C, 0x803C767C) //this is a jump label
/*803C767C 003C447C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803C7680 003C4480*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803C7684 003C4484*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C7688 003C4488*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C768C 003C448C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C7690 003C4490*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C7694 003C4494*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803C7698 003C4498*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C769C 003C449C*/ PPC::Runtime::ASM::blr();
}