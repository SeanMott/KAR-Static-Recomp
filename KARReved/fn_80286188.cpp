//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80286188(PPC::Runtime::GCContext* context)
{
/*80286188 00282F88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028618C 00282F8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80286190 00282F90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80286194 00282F94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80286198 00282F98*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028619C 00282F9C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802861A0 00282FA0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802861A4 00282FA4*/ PPC::Runtime::ASM::beq(.L_802863E8);
/*802861A8 00282FA8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BBED0 @ Get_MemoryOffset_HighBit);
/*802861AC 00282FAC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x7c);
/*802861B0 00282FB0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BBED0 @ Get_MemoryOffset_LowBit);
/*802861B4 00282FB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802861B8 00282FB8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802861BC 00282FBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802861C0 00282FC0*/ PPC::Runtime::ASM::beq(.L_8028628C);
/*802861C4 00282FC4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BBE28 @ Get_MemoryOffset_HighBit);
/*802861C8 00282FC8*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xb8);
/*802861CC 00282FCC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BBE28 @ Get_MemoryOffset_LowBit);
/*802861D0 00282FD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*802861D4 00282FD4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802861D8 00282FD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r30));
/*802861DC 00282FDC*/ PPC::Runtime::ASM::beq(.L_80286200);
/*802861E0 00282FE0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802861E4 00282FE4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802861E8 00282FE8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802861EC 00282FEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r30));
/*802861F0 00282FF0*/ PPC::Runtime::ASM::beq(.L_80286200);
/*802861F4 00282FF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802861F8 00282FF8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802861FC 00282FFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80286200, 0x80286200) //this is a jump label
/*80286200 00283000*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xac);
/*80286204 00283004*/ PPC::Runtime::ASM::beq(.L_80286214);
/*80286208 00283008*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*8028620C 0028300C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*80286210 00283010*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80286214, 0x80286214) //this is a jump label
/*80286214 00283014*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x7c);
/*80286218 00283018*/ PPC::Runtime::ASM::beq(.L_8028628C);
/*8028621C 0028301C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*80286220 00283020*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xa4);
/*80286224 00283024*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*80286228 00283028*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*8028622C 0028302C*/ PPC::Runtime::ASM::beq(.L_80286250);
/*80286230 00283030*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*80286234 00283034*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80286238 00283038*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*8028623C 0028303C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r30));
/*80286240 00283040*/ PPC::Runtime::ASM::beq(.L_80286250);
/*80286244 00283044*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*80286248 00283048*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*8028624C 0028304C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80286250, 0x80286250) //this is a jump label
/*80286250 00283050*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x7c);
/*80286254 00283054*/ PPC::Runtime::ASM::beq(.L_8028628C);
/*80286258 00283058*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*8028625C 0028305C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x7c);
/*80286260 00283060*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*80286264 00283064*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*80286268 00283068*/ PPC::Runtime::ASM::beq(.L_8028628C);
/*8028626C 0028306C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*80286270 00283070*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c);
/*80286274 00283074*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*80286278 00283078*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*8028627C 0028307C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*80286280 00283080*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80286284 00283084*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80286288 00283088*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028628C, 0x8028628C) //this is a jump label
/*8028628C 0028308C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x38);
/*80286290 00283090*/ PPC::Runtime::ASM::beq(.L_80286350);
/*80286294 00283094*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*80286298 00283098*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x68);
/*8028629C 0028309C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802862A0 002830A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802862A4 002830A4*/ PPC::Runtime::ASM::beq(.L_802862D8);
/*802862A8 002830A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802862AC 002830AC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802862B0 002830B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802862B4 002830B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*802862B8 002830B8*/ PPC::Runtime::ASM::beq(.L_802862D8);
/*802862BC 002830BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802862C0 002830C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802862C4 002830C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*802862C8 002830C8*/ PPC::Runtime::ASM::beq(.L_802862D8);
/*802862CC 002830CC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802862D0 002830D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802862D4 002830D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802862D8, 0x802862D8) //this is a jump label
/*802862D8 002830D8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x38);
/*802862DC 002830DC*/ PPC::Runtime::ASM::beq(.L_80286350);
/*802862E0 002830E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802862E4 002830E4*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x60);
/*802862E8 002830E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802862EC 002830EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802862F0 002830F0*/ PPC::Runtime::ASM::beq(.L_80286314);
/*802862F4 002830F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802862F8 002830F8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802862FC 002830FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*80286300 00283100*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80286304 00283104*/ PPC::Runtime::ASM::beq(.L_80286314);
/*80286308 00283108*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*8028630C 0028310C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*80286310 00283110*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80286314, 0x80286314) //this is a jump label
/*80286314 00283114*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x38);
/*80286318 00283118*/ PPC::Runtime::ASM::beq(.L_80286350);
/*8028631C 0028311C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*80286320 00283120*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x38);
/*80286324 00283124*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*80286328 00283128*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8028632C 0028312C*/ PPC::Runtime::ASM::beq(.L_80286350);
/*80286330 00283130*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*80286334 00283134*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x38);
/*80286338 00283138*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*8028633C 0028313C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80286340 00283140*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80286344 00283144*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80286348 00283148*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028634C 0028314C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80286350, 0x80286350) //this is a jump label
/*80286350 00283150*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x30);
/*80286354 00283154*/ PPC::Runtime::ASM::beq(.L_80286364);
/*80286358 00283158*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*8028635C 0028315C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*80286360 00283160*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80286364, 0x80286364) //this is a jump label
/*80286364 00283164*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80286368 00283168*/ PPC::Runtime::ASM::beq(.L_802863D8);
/*8028636C 0028316C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*80286370 00283170*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x28);
/*80286374 00283174*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*80286378 00283178*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028637C 0028317C*/ PPC::Runtime::ASM::beq(.L_802863A0);
/*80286380 00283180*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*80286384 00283184*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x28);
/*80286388 00283188*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*8028638C 0028318C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80286390 00283190*/ PPC::Runtime::ASM::beq(.L_802863A0);
/*80286394 00283194*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*80286398 00283198*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*8028639C 0028319C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802863A0, 0x802863A0) //this is a jump label
/*802863A0 002831A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802863A4 002831A4*/ PPC::Runtime::ASM::beq(.L_802863D8);
/*802863A8 002831A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802863AC 002831AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802863B0 002831B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802863B4 002831B4*/ PPC::Runtime::ASM::beq(.L_802863D8);
/*802863B8 002831B8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802863BC 002831BC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802863C0 002831C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802863C4 002831C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802863C8 002831C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802863CC 002831CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802863D0 002831D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802863D4 002831D4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802863D8, 0x802863D8) //this is a jump label
/*802863D8 002831D8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802863DC 002831DC*/ PPC::Runtime::ASM::ble(.L_802863E8);
/*802863E0 002831E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802863E4 002831E4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802863E8, 0x802863E8) //this is a jump label
/*802863E8 002831E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802863EC 002831EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802863F0 002831F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802863F4 002831F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802863F8 002831F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802863FC 002831FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80286400 00283200*/ PPC::Runtime::ASM::blr();
}