//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80449958.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_804482CC(PPC::Runtime::GCContext* context)
{
/*804482CC 004450CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*804482D0 004450D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*804482D4 004450D4*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_HighBit);
/*804482D8 004450D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804482DC 004450DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804482E0 004450E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804482E4 004450E4*/ PPC::Runtime::ASM::addi(context->r30, context->r4, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_LowBit);
/*804482E8 004450E8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804482EC 004450EC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804482F0 004450F0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*804482F4 004450F4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804482F8 004450F8*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*804482FC 004450FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80448300 00445100*/ PPC::Runtime::ASM::blt(.L_80448310);
/*80448304 00445104*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE4EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80448308 00445108*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*8044830C 0044510C*/ PPC::Runtime::ASM::blt(.L_80448320);
RUNTIME_PPC_JUMP_LABEL(.L_80448310, 0x80448310) //this is a jump label
/*80448310 00445110*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80448314 00445114*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80448318 00445118*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8044831C 0044511C*/ PPC::Runtime::ASM::b(.L_804483CC);
RUNTIME_PPC_JUMP_LABEL(.L_80448320, 0x80448320) //this is a jump label
/*80448320 00445120*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80448324 00445124*/ PPC::Runtime::ASM::bl(fn_80449958);
/*80448328 00445128*/ PPC::Runtime::ASM::slwi(context->r29, context->r28, 2);
/*8044832C 0044512C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x20);
/*80448330 00445130*/ PPC::Runtime::ASM::b(.L_804483A4);
RUNTIME_PPC_JUMP_LABEL(.L_80448334, 0x80448334) //this is a jump label
/*80448334 00445134*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80448338 00445138*/ PPC::Runtime::ASM::b(.L_80448380);
RUNTIME_PPC_JUMP_LABEL(.L_8044833C, 0x8044833C) //this is a jump label
/*8044833C 0044513C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80448340 00445140*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x320);
/*80448344 00445144*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r3);
/*80448348 00445148*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r5, 27, 2);
/*8044834C 0044514C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80448350 00445150*/ PPC::Runtime::ASM::b(.L_80448370);
RUNTIME_PPC_JUMP_LABEL(.L_80448354, 0x80448354) //this is a jump label
/*80448354 00445154*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80448358 00445158*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*8044835C 0044515C*/ PPC::Runtime::ASM::bne(.L_8044836C);
/*80448360 00445160*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80448364 00445164*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80448368 00445168*/ PPC::Runtime::ASM::b(.L_8044837C);
RUNTIME_PPC_JUMP_LABEL(.L_8044836C, 0x8044836C) //this is a jump label
/*8044836C 0044516C*/ PPC::Runtime::ASM::mr(context->r4, context->r7);
RUNTIME_PPC_JUMP_LABEL(.L_80448370, 0x80448370) //this is a jump label
/*80448370 00445170*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80448374 00445174*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*80448378 00445178*/ PPC::Runtime::ASM::bne(.L_80448354);
RUNTIME_PPC_JUMP_LABEL(.L_8044837C, 0x8044837C) //this is a jump label
/*8044837C 0044517C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80448380, 0x80448380) //this is a jump label
/*80448380 00445180*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80448384 00445184*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80448388 00445188*/ PPC::Runtime::ASM::blt(.L_8044833C);
/*8044838C 0044518C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r28, context->r29);
/*80448390 00445190*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE4E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80448394 00445194*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80448398 00445198*/ PPC::Runtime::ASM::stwx(context->r0, context->r28, context->r29);
/*8044839C 0044519C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*804483A0 004451A0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_804483A4, 0x804483A4) //this is a jump label
/*804483A4 004451A4*/ PPC::Runtime::ASM::lwzx(context->r6, context->r28, context->r29);
/*804483A8 004451A8*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*804483AC 004451AC*/ PPC::Runtime::ASM::bne(.L_80448334);
/*804483B0 004451B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3a0);
/*804483B4 004451B4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x2a0);
/*804483B8 004451B8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r29);
/*804483BC 004451BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804483C0 004451C0*/ PPC::Runtime::ASM::stwx(context->r0, context->r4, context->r29);
/*804483C4 004451C4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804483C8 004451C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_804483CC, 0x804483CC) //this is a jump label
/*804483CC 004451CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804483D0 004451D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804483D4 004451D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804483D8 004451D8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804483DC 004451DC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804483E0 004451E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804483E4 004451E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804483E8 004451E8*/ PPC::Runtime::ASM::blr();
}