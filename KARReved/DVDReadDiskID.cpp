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



void DVDReadDiskID(PPC::Runtime::GCContext* context)
{
/*803C7510 003C4310*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C7514 003C4314*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C7518 003C4318*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*803C751C 003C431C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803C7520 003C4320*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C7524 003C4324*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803C7528 003C4328*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803C752C 003C432C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803C7530 003C4330*/ PPC::Runtime::ASM::li(context->r3, 0x20);
/*803C7534 003C4334*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C7538 003C4338*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803C753C 003C433C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803C7540 003C4340*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803C7544 003C4344*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*803C7548 003C4348*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803C754C 003C434C*/ PPC::Runtime::ASM::lwz(context->r0, autoInvalidation_805DC8E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C7550 003C4350*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C7554 003C4354*/ PPC::Runtime::ASM::beq(.L_803C7584);
/*803C7558 003C4358*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803C755C 003C435C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*803C7560 003C4360*/ PPC::Runtime::ASM::beq(.L_803C7578);
/*803C7564 003C4364*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x4);
/*803C7568 003C4368*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803C756C 003C436C*/ PPC::Runtime::ASM::ble(.L_803C7578);
/*803C7570 003C4370*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xe);
/*803C7574 003C4374*/ PPC::Runtime::ASM::bne(.L_803C7584);
RUNTIME_PPC_JUMP_LABEL(.L_803C7578, 0x803C7578) //this is a jump label
/*803C7578 003C4378*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803C757C 003C437C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803C7580 003C4380*/ PPC::Runtime::ASM::bl(DCInvalidateRange);
RUNTIME_PPC_JUMP_LABEL(.L_803C7584, 0x803C7584) //this is a jump label
/*803C7584 003C4384*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803C7588 003C4388*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803C758C 003C438C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803C7590 003C4390*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803C7594 003C4394*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*803C7598 003C4398*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*803C759C 003C439C*/ PPC::Runtime::ASM::bl(__DVDPushWaitingQueue);
/*803C75A0 003C43A0*/ PPC::Runtime::ASM::lwz(context->r0, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C75A4 003C43A4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803C75A8 003C43A8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C75AC 003C43AC*/ PPC::Runtime::ASM::bne(.L_803C75C0);
/*803C75B0 003C43B0*/ PPC::Runtime::ASM::lwz(context->r0, PauseFlag_805DDDB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C75B4 003C43B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C75B8 003C43B8*/ PPC::Runtime::ASM::bne(.L_803C75C0);
/*803C75BC 003C43BC*/ PPC::Runtime::ASM::bl(stateReady);
RUNTIME_PPC_JUMP_LABEL(.L_803C75C0, 0x803C75C0) //this is a jump label
/*803C75C0 003C43C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803C75C4 003C43C4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803C75C8 003C43C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C75CC 003C43CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803C75D0 003C43D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C75D4 003C43D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803C75D8 003C43D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803C75DC 003C43DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C75E0 003C43E0*/ PPC::Runtime::ASM::blr();
}