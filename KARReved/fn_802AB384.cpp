//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802AB384(PPC::Runtime::GCContext* context)
{
/*802AB384 002A8184*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AB388 002A8188*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AB38C 002A818C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AB390 002A8190*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AB394 002A8194*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AB398 002A8198*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AB39C 002A819C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AB3A0 002A81A0*/ PPC::Runtime::ASM::beq(.L_802AB6F0);
/*802AB3A4 002A81A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C0BE4 @ Get_MemoryOffset_HighBit);
/*802AB3A8 002A81A8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd0);
/*802AB3AC 002A81AC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C0BE4 @ Get_MemoryOffset_LowBit);
/*802AB3B0 002A81B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AB3B4 002A81B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802AB3B8 002A81B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AB3BC 002A81BC*/ PPC::Runtime::ASM::beq(.L_802AB47C);
/*802AB3C0 002A81C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802AB3C4 002A81C4*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x100);
/*802AB3C8 002A81C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802AB3CC 002A81CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*802AB3D0 002A81D0*/ PPC::Runtime::ASM::beq(.L_802AB404);
/*802AB3D4 002A81D4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802AB3D8 002A81D8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AB3DC 002A81DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802AB3E0 002A81E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r30));
/*802AB3E4 002A81E4*/ PPC::Runtime::ASM::beq(.L_802AB404);
/*802AB3E8 002A81E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802AB3EC 002A81EC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802AB3F0 002A81F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r30));
/*802AB3F4 002A81F4*/ PPC::Runtime::ASM::beq(.L_802AB404);
/*802AB3F8 002A81F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802AB3FC 002A81FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802AB400 002A8200*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB404, 0x802AB404) //this is a jump label
/*802AB404 002A8204*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd0);
/*802AB408 002A8208*/ PPC::Runtime::ASM::beq(.L_802AB47C);
/*802AB40C 002A820C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AB410 002A8210*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xf8);
/*802AB414 002A8214*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AB418 002A8218*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*802AB41C 002A821C*/ PPC::Runtime::ASM::beq(.L_802AB440);
/*802AB420 002A8220*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AB424 002A8224*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AB428 002A8228*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AB42C 002A822C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r30));
/*802AB430 002A8230*/ PPC::Runtime::ASM::beq(.L_802AB440);
/*802AB434 002A8234*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AB438 002A8238*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AB43C 002A823C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB440, 0x802AB440) //this is a jump label
/*802AB440 002A8240*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd0);
/*802AB444 002A8244*/ PPC::Runtime::ASM::beq(.L_802AB47C);
/*802AB448 002A8248*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AB44C 002A824C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd0);
/*802AB450 002A8250*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AB454 002A8254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*802AB458 002A8258*/ PPC::Runtime::ASM::beq(.L_802AB47C);
/*802AB45C 002A825C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AB460 002A8260*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xd0);
/*802AB464 002A8264*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AB468 002A8268*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*802AB46C 002A826C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*802AB470 002A8270*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AB474 002A8274*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AB478 002A8278*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AB47C, 0x802AB47C) //this is a jump label
/*802AB47C 002A827C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8c);
/*802AB480 002A8280*/ PPC::Runtime::ASM::beq(.L_802AB54C);
/*802AB484 002A8284*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BBE28 @ Get_MemoryOffset_HighBit);
/*802AB488 002A8288*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xc8);
/*802AB48C 002A828C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BBE28 @ Get_MemoryOffset_LowBit);
/*802AB490 002A8290*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802AB494 002A8294*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802AB498 002A8298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r30));
/*802AB49C 002A829C*/ PPC::Runtime::ASM::beq(.L_802AB4C0);
/*802AB4A0 002A82A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AB4A4 002A82A4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AB4A8 002A82A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AB4AC 002A82AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r30));
/*802AB4B0 002A82B0*/ PPC::Runtime::ASM::beq(.L_802AB4C0);
/*802AB4B4 002A82B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AB4B8 002A82B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AB4BC 002A82BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB4C0, 0x802AB4C0) //this is a jump label
/*802AB4C0 002A82C0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xbc);
/*802AB4C4 002A82C4*/ PPC::Runtime::ASM::beq(.L_802AB4D4);
/*802AB4C8 002A82C8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802AB4CC 002A82CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802AB4D0 002A82D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB4D4, 0x802AB4D4) //this is a jump label
/*802AB4D4 002A82D4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8c);
/*802AB4D8 002A82D8*/ PPC::Runtime::ASM::beq(.L_802AB54C);
/*802AB4DC 002A82DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AB4E0 002A82E0*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xb4);
/*802AB4E4 002A82E4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AB4E8 002A82E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802AB4EC 002A82EC*/ PPC::Runtime::ASM::beq(.L_802AB510);
/*802AB4F0 002A82F0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AB4F4 002A82F4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AB4F8 002A82F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AB4FC 002A82FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r30));
/*802AB500 002A8300*/ PPC::Runtime::ASM::beq(.L_802AB510);
/*802AB504 002A8304*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AB508 002A8308*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AB50C 002A830C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB510, 0x802AB510) //this is a jump label
/*802AB510 002A8310*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8c);
/*802AB514 002A8314*/ PPC::Runtime::ASM::beq(.L_802AB54C);
/*802AB518 002A8318*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AB51C 002A831C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8c);
/*802AB520 002A8320*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AB524 002A8324*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802AB528 002A8328*/ PPC::Runtime::ASM::beq(.L_802AB54C);
/*802AB52C 002A832C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AB530 002A8330*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c);
/*802AB534 002A8334*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AB538 002A8338*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802AB53C 002A833C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802AB540 002A8340*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AB544 002A8344*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AB548 002A8348*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AB54C, 0x802AB54C) //this is a jump label
/*802AB54C 002A834C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x44);
/*802AB550 002A8350*/ PPC::Runtime::ASM::beq(.L_802AB610);
/*802AB554 002A8354*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6F70 @ Get_MemoryOffset_HighBit);
/*802AB558 002A8358*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x74);
/*802AB55C 002A835C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F6F70 @ Get_MemoryOffset_LowBit);
/*802AB560 002A8360*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*802AB564 002A8364*/ PPC::Runtime::ASM::beq(.L_802AB598);
/*802AB568 002A8368*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802AB56C 002A836C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AB570 002A8370*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802AB574 002A8374*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*802AB578 002A8378*/ PPC::Runtime::ASM::beq(.L_802AB598);
/*802AB57C 002A837C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802AB580 002A8380*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802AB584 002A8384*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*802AB588 002A8388*/ PPC::Runtime::ASM::beq(.L_802AB598);
/*802AB58C 002A838C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802AB590 002A8390*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802AB594 002A8394*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB598, 0x802AB598) //this is a jump label
/*802AB598 002A8398*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x44);
/*802AB59C 002A839C*/ PPC::Runtime::ASM::beq(.L_802AB610);
/*802AB5A0 002A83A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AB5A4 002A83A4*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x6c);
/*802AB5A8 002A83A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AB5AC 002A83AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*802AB5B0 002A83B0*/ PPC::Runtime::ASM::beq(.L_802AB5D4);
/*802AB5B4 002A83B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AB5B8 002A83B8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AB5BC 002A83BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AB5C0 002A83C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*802AB5C4 002A83C4*/ PPC::Runtime::ASM::beq(.L_802AB5D4);
/*802AB5C8 002A83C8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AB5CC 002A83CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AB5D0 002A83D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB5D4, 0x802AB5D4) //this is a jump label
/*802AB5D4 002A83D4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x44);
/*802AB5D8 002A83D8*/ PPC::Runtime::ASM::beq(.L_802AB610);
/*802AB5DC 002A83DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AB5E0 002A83E0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x44);
/*802AB5E4 002A83E4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AB5E8 002A83E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*802AB5EC 002A83EC*/ PPC::Runtime::ASM::beq(.L_802AB610);
/*802AB5F0 002A83F0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AB5F4 002A83F4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x44);
/*802AB5F8 002A83F8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AB5FC 002A83FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*802AB600 002A8400*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*802AB604 002A8404*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AB608 002A8408*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AB60C 002A840C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AB610, 0x802AB610) //this is a jump label
/*802AB610 002A8410*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AB614 002A8414*/ PPC::Runtime::ASM::beq(.L_802AB6E0);
/*802AB618 002A8418*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F66FC @ Get_MemoryOffset_HighBit);
/*802AB61C 002A841C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802AB620 002A8420*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F66FC @ Get_MemoryOffset_LowBit);
/*802AB624 002A8424*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AB628 002A8428*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802AB62C 002A842C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AB630 002A8430*/ PPC::Runtime::ASM::beq(.L_802AB654);
/*802AB634 002A8434*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AB638 002A8438*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802AB63C 002A843C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AB640 002A8440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802AB644 002A8444*/ PPC::Runtime::ASM::beq(.L_802AB654);
/*802AB648 002A8448*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AB64C 002A844C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AB650 002A8450*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB654, 0x802AB654) //this is a jump label
/*802AB654 002A8454*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AB658 002A8458*/ PPC::Runtime::ASM::beq(.L_802AB6CC);
/*802AB65C 002A845C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AB660 002A8460*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802AB664 002A8464*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AB668 002A8468*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AB66C 002A846C*/ PPC::Runtime::ASM::beq(.L_802AB690);
/*802AB670 002A8470*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AB674 002A8474*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AB678 002A8478*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AB67C 002A847C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802AB680 002A8480*/ PPC::Runtime::ASM::beq(.L_802AB690);
/*802AB684 002A8484*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AB688 002A8488*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AB68C 002A848C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB690, 0x802AB690) //this is a jump label
/*802AB690 002A8490*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AB694 002A8494*/ PPC::Runtime::ASM::beq(.L_802AB6CC);
/*802AB698 002A8498*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AB69C 002A849C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AB6A0 002A84A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AB6A4 002A84A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AB6A8 002A84A8*/ PPC::Runtime::ASM::beq(.L_802AB6CC);
/*802AB6AC 002A84AC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AB6B0 002A84B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802AB6B4 002A84B4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AB6B8 002A84B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AB6BC 002A84BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AB6C0 002A84C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AB6C4 002A84C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AB6C8 002A84C8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AB6CC, 0x802AB6CC) //this is a jump label
/*802AB6CC 002A84CC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AB6D0 002A84D0*/ PPC::Runtime::ASM::beq(.L_802AB6E0);
/*802AB6D4 002A84D4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802AB6D8 002A84D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802AB6DC 002A84DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AB6E0, 0x802AB6E0) //this is a jump label
/*802AB6E0 002A84E0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AB6E4 002A84E4*/ PPC::Runtime::ASM::ble(.L_802AB6F0);
/*802AB6E8 002A84E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AB6EC 002A84EC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AB6F0, 0x802AB6F0) //this is a jump label
/*802AB6F0 002A84F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AB6F4 002A84F4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AB6F8 002A84F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AB6FC 002A84FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AB700 002A8500*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AB704 002A8504*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AB708 002A8508*/ PPC::Runtime::ASM::blr();
}