//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSClearContext.hpp"
#include "fn___OSUnlockAllMutex.hpp"
#include "fn_OSWakeupThread.hpp"
#include "SelectThread.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_OSExitThread(PPC::Runtime::GCContext* context)
{
/*803DA2B8 003D70B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DA2BC 003D70BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DA2C0 003D70C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803DA2C4 003D70C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DA2C8 003D70C8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803DA2CC 003D70CC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DA2D0 003D70D0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DA2D4 003D70D4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*803DA2D8 003D70D8*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DA2DC 003D70DC*/ PPC::Runtime::ASM::lis(context->r31, 0x8000);
/*803DA2E0 003D70E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*803DA2E4 003D70E4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803DA2E8 003D70E8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803DA2EC 003D70EC*/ PPC::Runtime::ASM::bl(OSClearContext);
/*803DA2F0 003D70F0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ca, context->r30));
/* 803DA2F4 003D70F4  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803DA2F8 003D70F8*/ PPC::Runtime::ASM::beq(.L_803DA33C);
/*803DA2FC 003D70FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r30));
/*803DA300 003D7100*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r30));
/*803DA304 003D7104*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803DA308 003D7108*/ PPC::Runtime::ASM::bne(.L_803DA314);
/*803DA30C 003D710C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r31));
/*803DA310 003D7110*/ PPC::Runtime::ASM::b(.L_803DA318);
RUNTIME_PPC_JUMP_LABEL(.L_803DA314, 0x803DA314) //this is a jump label
/*803DA314 003D7114*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803DA318, 0x803DA318) //this is a jump label
/*803DA318 003D7118*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803DA31C 003D711C*/ PPC::Runtime::ASM::bne(.L_803DA32C);
/*803DA320 003D7120*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803DA324 003D7124*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r3));
/*803DA328 003D7128*/ PPC::Runtime::ASM::b(.L_803DA330);
RUNTIME_PPC_JUMP_LABEL(.L_803DA32C, 0x803DA32C) //this is a jump label
/*803DA32C 003D712C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_803DA330, 0x803DA330) //this is a jump label
/*803DA330 003D7130*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803DA334 003D7134*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r30));
/*803DA338 003D7138*/ PPC::Runtime::ASM::b(.L_803DA348);
RUNTIME_PPC_JUMP_LABEL(.L_803DA33C, 0x803DA33C) //this is a jump label
/*803DA33C 003D713C*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*803DA340 003D7140*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r30));
/*803DA344 003D7144*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803DA348, 0x803DA348) //this is a jump label
/*803DA348 003D7148*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803DA34C 003D714C*/ PPC::Runtime::ASM::bl(fn___OSUnlockAllMutex);
/*803DA350 003D7150*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2e8);
/*803DA354 003D7154*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
/*803DA358 003D7158*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803DA35C 003D715C*/ PPC::Runtime::ASM::stw(context->r0, RunQueueHint_805DDF2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DA360 003D7160*/ PPC::Runtime::ASM::lwz(context->r0, RunQueueHint_805DDF2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DA364 003D7164*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803DA368 003D7168*/ PPC::Runtime::ASM::beq(.L_803DA374);
/*803DA36C 003D716C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DA370 003D7170*/ PPC::Runtime::ASM::bl(SelectThread);
RUNTIME_PPC_JUMP_LABEL(.L_803DA374, 0x803DA374) //this is a jump label
/*803DA374 003D7174*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803DA378 003D7178*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DA37C 003D717C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803DA380 003D7180*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DA384 003D7184*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803DA388 003D7188*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DA38C 003D718C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DA390 003D7190*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803DA394 003D7194*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DA398 003D7198*/ PPC::Runtime::ASM::blr();
}