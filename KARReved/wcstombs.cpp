//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_strncpy.hpp"



void wcstombs(PPC::Runtime::GCContext* context)
{
/*803B434C 003B114C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803B4350 003B1150*/ PPC::Runtime::ASM::mflr(context->r0);
/*803B4354 003B1154*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803B4358 003B1158*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/* 803B435C 003B115C  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*803B4360 003B1160*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*803B4364 003B1164*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803B4368 003B1168*/ PPC::Runtime::ASM::beq(.L_803B4374);
/*803B436C 003B116C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803B4370 003B1170*/ PPC::Runtime::ASM::bne(.L_803B437C);
RUNTIME_PPC_JUMP_LABEL(.L_803B4374, 0x803B4374) //this is a jump label
/*803B4374 003B1174*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B4378 003B1178*/ PPC::Runtime::ASM::b(.L_803B4450);
RUNTIME_PPC_JUMP_LABEL(.L_803B437C, 0x803B437C) //this is a jump label
/*803B437C 003B117C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803B4380 003B1180*/ PPC::Runtime::ASM::b(.L_803B4444);
RUNTIME_PPC_JUMP_LABEL(.L_803B4384, 0x803B4384) //this is a jump label
/*803B4384 003B1184*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803B4388 003B1188*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*803B438C 003B118C*/ PPC::Runtime::ASM::bne(.L_803B439C);
/*803B4390 003B1190*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803B4394 003B1194*/ PPC::Runtime::ASM::stbx(context->r0, context->r28, context->r31);
/*803B4398 003B1198*/ PPC::Runtime::ASM::b(.L_803B4450);
RUNTIME_PPC_JUMP_LABEL(.L_803B439C, 0x803B439C) //this is a jump label
/*803B439C 003B119C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E5198 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B43A0 003B11A0*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x80);
/*803B43A4 003B11A4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x2);
/*803B43A8 003B11A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B43AC 003B11AC*/ PPC::Runtime::ASM::bge(.L_803B43B8);
/*803B43B0 003B11B0*/ PPC::Runtime::ASM::li(context->r27, 0x1);
/*803B43B4 003B11B4*/ PPC::Runtime::ASM::b(.L_803B43CC);
RUNTIME_PPC_JUMP_LABEL(.L_803B43B8, 0x803B43B8) //this is a jump label
/*803B43B8 003B11B8*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x800);
/*803B43BC 003B11BC*/ PPC::Runtime::ASM::bge(.L_803B43C8);
/*803B43C0 003B11C0*/ PPC::Runtime::ASM::li(context->r27, 0x2);
/*803B43C4 003B11C4*/ PPC::Runtime::ASM::b(.L_803B43CC);
RUNTIME_PPC_JUMP_LABEL(.L_803B43C8, 0x803B43C8) //this is a jump label
/*803B43C8 003B11C8*/ PPC::Runtime::ASM::li(context->r27, 0x3);
RUNTIME_PPC_JUMP_LABEL(.L_803B43CC, 0x803B43CC) //this is a jump label
/*803B43CC 003B11CC*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x2);
/*803B43D0 003B11D0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*803B43D4 003B11D4*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r27);
/*803B43D8 003B11D8*/ PPC::Runtime::ASM::beq(.L_803B4404);
/*803B43DC 003B11DC*/ PPC::Runtime::ASM::bge(.L_803B43EC);
/*803B43E0 003B11E0*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x1);
/*803B43E4 003B11E4*/ PPC::Runtime::ASM::bge(.L_803B4414);
/*803B43E8 003B11E8*/ PPC::Runtime::ASM::b(.L_803B4424);
RUNTIME_PPC_JUMP_LABEL(.L_803B43EC, 0x803B43EC) //this is a jump label
/*803B43EC 003B11EC*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*803B43F0 003B11F0*/ PPC::Runtime::ASM::bge(.L_803B4424);
/*803B43F4 003B11F4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r6, 26);
/*803B43F8 003B11F8*/ PPC::Runtime::ASM::extrwi(context->r6, context->r6, 10, 16);
/*803B43FC 003B11FC*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x80);
/*803B4400 003B1200*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_803B4404, 0x803B4404) //this is a jump label
/*803B4404 003B1204*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r6, 26);
/*803B4408 003B1208*/ PPC::Runtime::ASM::extrwi(context->r6, context->r6, 10, 16);
/*803B440C 003B120C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x80);
/*803B4410 003B1210*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_803B4414, 0x803B4414) //this is a jump label
/*803B4414 003B1214*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803B4418 003B1218*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r27);
/*803B441C 003B121C*/ PPC::Runtime::ASM::or(context->r0, context->r6, context->r0);
/*803B4420 003B1220*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_803B4424, 0x803B4424) //this is a jump label
/*803B4424 003B1224*/ PPC::Runtime::ASM::add(context->r0, context->r31, context->r27);
/*803B4428 003B1228*/ PPC::Runtime::ASM::cmplw(context->r0, context->r29);
/*803B442C 003B122C*/ PPC::Runtime::ASM::bgt(.L_803B4450);
/*803B4430 003B1230*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*803B4434 003B1234*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r31);
/*803B4438 003B1238*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*803B443C 003B123C*/ PPC::Runtime::ASM::bl(fn_strncpy);
/*803B4440 003B1240*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_803B4444, 0x803B4444) //this is a jump label
/*803B4444 003B1244*/ PPC::Runtime::ASM::cmplw(context->r31, context->r29);
/*803B4448 003B1248*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803B444C 003B124C*/ PPC::Runtime::ASM::ble(.L_803B4384);
RUNTIME_PPC_JUMP_LABEL(.L_803B4450, 0x803B4450) //this is a jump label
/*803B4450 003B1250*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803B4454 003B1254*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803B4458 003B1258*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803B445C 003B125C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803B4460 003B1260*/ PPC::Runtime::ASM::blr();
}