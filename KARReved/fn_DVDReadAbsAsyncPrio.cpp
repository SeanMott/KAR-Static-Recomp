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



void fn_DVDReadAbsAsyncPrio(PPC::Runtime::GCContext* context)
{
/*803C7364 003C4164*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C7368 003C4168*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C736C 003C416C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C7370 003C4170*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*803C7374 003C4174*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803C7378 003C4178*/ PPC::Runtime::ASM::addi(context->r31, context->r8, 0x0);
/*803C737C 003C417C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803C7380 003C4180*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803C7384 003C4184*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803C7388 003C4188*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803C738C 003C418C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C7390 003C4190*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803C7394 003C4194*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803C7398 003C4198*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803C739C 003C419C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*803C73A0 003C41A0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*803C73A4 003C41A4*/ PPC::Runtime::ASM::lwz(context->r0, autoInvalidation_805DC8E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C73A8 003C41A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C73AC 003C41AC*/ PPC::Runtime::ASM::beq(.L_803C73DC);
/*803C73B0 003C41B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803C73B4 003C41B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*803C73B8 003C41B8*/ PPC::Runtime::ASM::beq(.L_803C73D0);
/*803C73BC 003C41BC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x4);
/*803C73C0 003C41C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803C73C4 003C41C4*/ PPC::Runtime::ASM::ble(.L_803C73D0);
/*803C73C8 003C41C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xe);
/*803C73CC 003C41CC*/ PPC::Runtime::ASM::bne(.L_803C73DC);
RUNTIME_PPC_JUMP_LABEL(.L_803C73D0, 0x803C73D0) //this is a jump label
/*803C73D0 003C41D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*803C73D4 003C41D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*803C73D8 003C41D8*/ PPC::Runtime::ASM::bl(DCInvalidateRange);
RUNTIME_PPC_JUMP_LABEL(.L_803C73DC, 0x803C73DC) //this is a jump label
/*803C73DC 003C41DC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803C73E0 003C41E0*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803C73E4 003C41E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*803C73E8 003C41E8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803C73EC 003C41EC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803C73F0 003C41F0*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*803C73F4 003C41F4*/ PPC::Runtime::ASM::bl(__DVDPushWaitingQueue);
/*803C73F8 003C41F8*/ PPC::Runtime::ASM::lwz(context->r0, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C73FC 003C41FC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803C7400 003C4200*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C7404 003C4204*/ PPC::Runtime::ASM::bne(.L_803C7418);
/*803C7408 003C4208*/ PPC::Runtime::ASM::lwz(context->r0, PauseFlag_805DDDB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C740C 003C420C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C7410 003C4210*/ PPC::Runtime::ASM::bne(.L_803C7418);
/*803C7414 003C4214*/ PPC::Runtime::ASM::bl(stateReady);
RUNTIME_PPC_JUMP_LABEL(.L_803C7418, 0x803C7418) //this is a jump label
/*803C7418 003C4218*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803C741C 003C421C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803C7420 003C4220*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C7424 003C4224*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803C7428 003C4228*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803C742C 003C422C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803C7430 003C4230*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803C7434 003C4234*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*803C7438 003C4238*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C743C 003C423C*/ PPC::Runtime::ASM::blr();
}