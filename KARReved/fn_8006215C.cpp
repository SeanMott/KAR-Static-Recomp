//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8006215C(PPC::Runtime::GCContext* context)
{
/*8006215C 0005EF5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80062160 0005EF60*/ PPC::Runtime::ASM::mflr(context->r0);
/*80062164 0005EF64*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*80062168 0005EF68*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8006216C 0005EF6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80062170 0005EF70*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80062174 0005EF74*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80062178 0005EF78*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8006217C 0005EF7C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80062180 0005EF80*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80062184 0005EF84*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80062188 0005EF88*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*8006218C 0005EF8C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*80062190 0005EF90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*80062194 0005EF94*/ PPC::Runtime::ASM::bl(fn_804458D0);
/*80062198 0005EF98*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*8006219C 0005EF9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800621A0 0005EFA0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*800621A4 0005EFA4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*800621A8 0005EFA8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*800621AC 0005EFAC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*800621B0 0005EFB0*/ PPC::Runtime::ASM::addis(context->r29, context->r31, 0x1);
/*800621B4 0005EFB4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*800621B8 0005EFB8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*800621BC 0005EFBC*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*800621C0 0005EFC0*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r31));
/*800621C4 0005EFC4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800621C8 0005EFC8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7480, context->r29));
/*800621CC 0005EFCC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*800621D0 0005EFD0*/ PPC::Runtime::ASM::bl(fn_80445704);
/*800621D4 0005EFD4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*800621D8 0005EFD8*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*800621DC 0005EFDC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*800621E0 0005EFE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800621E4 0005EFE4*/ PPC::Runtime::ASM::addis(context->r4, context->r3, 0x1);
/*800621E8 0005EFE8*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*800621EC 0005EFEC*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*800621F0 0005EFF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7484, context->r4));
/*800621F4 0005EFF4*/ PPC::Runtime::ASM::bl(fn_80445704);
/*800621F8 0005EFF8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/* 800621FC 0005EFFC  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*80062200 0005F000*/ PPC::Runtime::ASM::beq(.L_800623A4);
/*80062204 0005F004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7480, context->r29));
/*80062208 0005F008*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2a);
/*8006220C 0005F00C*/ PPC::Runtime::ASM::beq(.L_800623A4);
/*80062210 0005F010*/ PPC::Runtime::ASM::lis(context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_HighBit);
/*80062214 0005F014*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*80062218 0005F018*/ PPC::Runtime::ASM::addi(context->r6, context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_LowBit);
/*8006221C 0005F01C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80062220 0005F020*/ PPC::Runtime::ASM::addi(context->r3, context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*80062224 0005F024*/ PPC::Runtime::ASM::li(context->r0, 0x45);
/*80062228 0005F028*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8006222C 0005F02C*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*80062230 0005F030*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80062234 0005F034*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80062238, 0x80062238) //this is a jump label
/*80062238 0005F038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8006223C 0005F03C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2a);
/*80062240 0005F040*/ PPC::Runtime::ASM::bne(.L_80062268);
/*80062244 0005F044*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80062248 0005F048*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8006224C 0005F04C*/ PPC::Runtime::ASM::bne(.L_80062268);
/*80062250 0005F050*/ PPC::Runtime::ASM::lis(context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_HighBit);
/*80062254 0005F054*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 4);
/*80062258 0005F058*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_LowBit);
/*8006225C 0005F05C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80062260 0005F060*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80062264 0005F064*/ PPC::Runtime::ASM::b(.L_80062274);
RUNTIME_PPC_JUMP_LABEL(.L_80062268, 0x80062268) //this is a jump label
/*80062268 0005F068*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8006226C 0005F06C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80062270 0005F070*/ PPC::Runtime::ASM::bdnz(.L_80062238);
RUNTIME_PPC_JUMP_LABEL(.L_80062274, 0x80062274) //this is a jump label
/*80062274 0005F074*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80062278 0005F078*/ PPC::Runtime::ASM::bne(.L_800622C8);
/*8006227C 0005F07C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80062280 0005F080*/ PPC::Runtime::ASM::li(context->r0, 0x45);
/*80062284 0005F084*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80062288 0005F088*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8006228C, 0x8006228C) //this is a jump label
/*8006228C 0005F08C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80062290 0005F090*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2a);
/*80062294 0005F094*/ PPC::Runtime::ASM::bne(.L_800622BC);
/*80062298 0005F098*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8006229C 0005F09C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800622A0 0005F0A0*/ PPC::Runtime::ASM::bne(.L_800622BC);
/*800622A4 0005F0A4*/ PPC::Runtime::ASM::lis(context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_HighBit);
/*800622A8 0005F0A8*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 4);
/*800622AC 0005F0AC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_LowBit);
/*800622B0 0005F0B0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800622B4 0005F0B4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800622B8 0005F0B8*/ PPC::Runtime::ASM::b(.L_800622C8);
RUNTIME_PPC_JUMP_LABEL(.L_800622BC, 0x800622BC) //this is a jump label
/*800622BC 0005F0BC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x10);
/*800622C0 0005F0C0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*800622C4 0005F0C4*/ PPC::Runtime::ASM::bdnz(.L_8006228C);
RUNTIME_PPC_JUMP_LABEL(.L_800622C8, 0x800622C8) //this is a jump label
/*800622C8 0005F0C8*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*800622CC 0005F0CC*/ PPC::Runtime::ASM::beq(.L_800623A4);
/*800622D0 0005F0D0*/ PPC::Runtime::ASM::li(context->r0, 0x2a);
/*800622D4 0005F0D4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800622D8 0005F0D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7480, context->r29));
/*800622DC 0005F0DC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D529C @ Get_MemoryOffset_SDA21);
/*800622E0 0005F0E0*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*800622E4 0005F0E4*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800622E8 0005F0E8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800622EC 0005F0EC*/ PPC::Runtime::ASM::bl(fn_strcat);
/*800622F0 0005F0F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/* 800622F4 0005F0F4  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*800622F8 0005F0F8*/ PPC::Runtime::ASM::bne(.L_80062334);
/*800622FC 0005F0FC*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r31));
/*80062300 0005F100*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xff);
/*80062304 0005F104*/ PPC::Runtime::ASM::ble(.L_80062310);
/*80062308 0005F108*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*8006230C 0005F10C*/ PPC::Runtime::ASM::b(.L_8006231C);
RUNTIME_PPC_JUMP_LABEL(.L_80062310, 0x80062310) //this is a jump label
/*80062310 0005F110*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80062314 0005F114*/ PPC::Runtime::ASM::bge(.L_8006231C);
/*80062318 0005F118*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006231C, 0x8006231C) //this is a jump label
/*8006231C 0005F11C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80062320 0005F120*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*80062324 0005F124*/ PPC::Runtime::ASM::li(context->r5, 0x3f);
/*80062328 0005F128*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8006232C 0005F12C*/ PPC::Runtime::ASM::bl(fn_804456C0);
/*80062330 0005F130*/ PPC::Runtime::ASM::b(.L_800623A4);
RUNTIME_PPC_JUMP_LABEL(.L_80062334, 0x80062334) //this is a jump label
/*80062334 0005F134*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80062338 0005F138*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8006233C 0005F13C*/ PPC::Runtime::ASM::li(context->r5, 0x3f);
/*80062340 0005F140*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80062344 0005F144*/ PPC::Runtime::ASM::bl(fn_804456C0);
/*80062348 0005F148*/ PPC::Runtime::ASM::subfic(context->r0, context->r3, 0x1);
/*8006234C 0005F14C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80062350 0005F150  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*80062354 0005F154*/ PPC::Runtime::ASM::beq(.L_800623A4);
/*80062358 0005F158*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*8006235C 0005F15C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80062360 0005F160*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*80062364 0005F164*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80062368 0005F168*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*8006236C 0005F16C*/ PPC::Runtime::ASM::bl(fn_80445810);
/*80062370 0005F170*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r31));
/*80062374 0005F174*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xff);
/*80062378 0005F178*/ PPC::Runtime::ASM::ble(.L_80062384);
/*8006237C 0005F17C*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*80062380 0005F180*/ PPC::Runtime::ASM::b(.L_80062390);
RUNTIME_PPC_JUMP_LABEL(.L_80062384, 0x80062384) //this is a jump label
/*80062384 0005F184*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80062388 0005F188*/ PPC::Runtime::ASM::bge(.L_80062390);
/*8006238C 0005F18C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80062390, 0x80062390) //this is a jump label
/*80062390 0005F190*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r31));
/*80062394 0005F194*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 24);
/*80062398 0005F198*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8006239C 0005F19C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800623A0 0005F1A0*/ PPC::Runtime::ASM::bl(fn_8044576C);
RUNTIME_PPC_JUMP_LABEL(.L_800623A4, 0x800623A4) //this is a jump label
/*800623A4 0005F1A4*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*800623A8 0005F1A8*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*800623AC 0005F1AC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r31));
/*800623B0 0005F1B0*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*800623B4 0005F1B4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800623B8 0005F1B8*/ PPC::Runtime::ASM::bl(fn_8044576C);
/*800623BC 0005F1BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*800623C0 0005F1C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800623C4 0005F1C4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*800623C8 0005F1C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*800623CC 0005F1CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800623D0 0005F1D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800623D4 0005F1D4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800623D8 0005F1D8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800623DC 0005F1DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800623E0 0005F1E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800623E4 0005F1E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*800623E8 0005F1E8*/ PPC::Runtime::ASM::blr();
}