//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80061620.hpp"
#include "fn_80030A48.hpp"
#include "fn_8013579C.hpp"
#include "fn_CSS_updateMachineSelectFrame.hpp"
#include "fn_800301F0.hpp"
#include "fn_800307AC.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135674.hpp"
#include "fn_?loadData2.hpp"
#include "fn_CSS_updateMachineImage.hpp"
#include "fn_80135674.hpp"
#include "fn_80135A14.hpp"
#include "fn_8002FB3C.hpp"



void fn_800312FC(PPC::Runtime::GCContext* context)
{
/*800312FC 0002E0FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80031300 0002E100*/ PPC::Runtime::ASM::mflr(context->r0);
/*80031304 0002E104*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80031308 0002E108*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8003130C 0002E10C*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80031310 0002E110*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80031314 0002E114*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80031318 0002E118*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x1d0);
/*8003131C 0002E11C*/ PPC::Runtime::ASM::extsb(context->r0, context->r25);
/*80031320 0002E120*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*80031324 0002E124*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r25, 24);
/*80031328 0002E128*/ PPC::Runtime::ASM::lbz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*8003132C 0002E12C*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*80031330 0002E130*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r31));
/*80031334 0002E134*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80031338 0002E138*/ PPC::Runtime::ASM::extsb(context->r29, context->r28);
/*8003133C 0002E13C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*80031340 0002E140*/ PPC::Runtime::ASM::add(context->r30, context->r31, context->r29);
/*80031344 0002E144*/ PPC::Runtime::ASM::extsb(context->r3, context->r6);
/*80031348 0002E148*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r0);
/*8003134C 0002E14C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r30));
/*80031350 0002E150*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x9);
/*80031354 0002E154*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80031358 0002E158*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8003135C 0002E15C*/ PPC::Runtime::ASM::ble(.L_800314E8);
/*80031360 0002E160*/ PPC::Runtime::ASM::lis(context->r5, 0x1);
/*80031364 0002E164*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x1);
/*80031368 0002E168*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*8003136C 0002E16C*/ PPC::Runtime::ASM::srwi(context->r6, context->r7, 31);
/*80031370 0002E170*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r7);
/*80031374 0002E174*/ PPC::Runtime::ASM::and.(context->r5, context->r0, context->r5);
/*80031378 0002E178*/ PPC::Runtime::ASM::srawi(context->r5, context->r6, 1);
/*8003137C 0002E17C*/ PPC::Runtime::ASM::beq(.L_800313DC);
/*80031380 0002E180*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80031384 0002E184*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*80031388 0002E188*/ PPC::Runtime::ASM::blt(.L_8003139C);
/*8003138C 0002E18C*/ PPC::Runtime::ASM::subf(context->r0, context->r5, context->r4);
/*80031390 0002E190*/ PPC::Runtime::ASM::li(context->r26, 0x1);
/*80031394 0002E194*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
/*80031398 0002E198*/ PPC::Runtime::ASM::b(.L_80031550);
RUNTIME_PPC_JUMP_LABEL(.L_8003139C, 0x8003139C) //this is a jump label
/*8003139C 0002E19C*/ PPC::Runtime::ASM::add(context->r6, context->r5, context->r4);
/*800313A0 0002E1A0*/ PPC::Runtime::ASM::subi(context->r0, context->r6, 0x1);
/*800313A4 0002E1A4*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
/*800313A8 0002E1A8*/ PPC::Runtime::ASM::cmpw(context->r27, context->r5);
/*800313AC 0002E1AC*/ PPC::Runtime::ASM::bge(.L_800313D4);
/*800313B0 0002E1B0*/ PPC::Runtime::ASM::slwi(context->r6, context->r5, 1);
/*800313B4 0002E1B4*/ PPC::Runtime::ASM::subi(context->r0, context->r6, 0x1);
/*800313B8 0002E1B8*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*800313BC 0002E1BC*/ PPC::Runtime::ASM::blt(.L_800313CC);
/*800313C0 0002E1C0*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*800313C4 0002E1C4*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
/*800313C8 0002E1C8*/ PPC::Runtime::ASM::b(.L_800313D4);
RUNTIME_PPC_JUMP_LABEL(.L_800313CC, 0x800313CC) //this is a jump label
/*800313CC 0002E1CC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800313D0 0002E1D0*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800313D4, 0x800313D4) //this is a jump label
/*800313D4 0002E1D4*/ PPC::Runtime::ASM::li(context->r26, 0x1);
/*800313D8 0002E1D8*/ PPC::Runtime::ASM::b(.L_80031550);
RUNTIME_PPC_JUMP_LABEL(.L_800313DC, 0x800313DC) //this is a jump label
/*800313DC 0002E1DC*/ PPC::Runtime::ASM::lis(context->r6, 0x2);
/*800313E0 0002E1E0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*800313E4 0002E1E4*/ PPC::Runtime::ASM::and.(context->r6, context->r0, context->r6);
/*800313E8 0002E1E8*/ PPC::Runtime::ASM::beq(.L_8003143C);
/*800313EC 0002E1EC*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*800313F0 0002E1F0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*800313F4 0002E1F4*/ PPC::Runtime::ASM::bge(.L_8003141C);
/*800313F8 0002E1F8*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r5);
/*800313FC 0002E1FC*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
/*80031400 0002E200*/ PPC::Runtime::ASM::cmpw(context->r27, context->r3);
/*80031404 0002E204*/ PPC::Runtime::ASM::blt(.L_80031414);
/*80031408 0002E208*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8003140C 0002E20C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80031410 0002E210*/ PPC::Runtime::ASM::b(.L_80031550);
RUNTIME_PPC_JUMP_LABEL(.L_80031414, 0x80031414) //this is a jump label
/*80031414 0002E214*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80031418 0002E218*/ PPC::Runtime::ASM::b(.L_80031550);
RUNTIME_PPC_JUMP_LABEL(.L_8003141C, 0x8003141C) //this is a jump label
/*8003141C 0002E21C*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80031420 0002E220*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*80031424 0002E224*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
/*80031428 0002E228*/ PPC::Runtime::ASM::cmpw(context->r27, context->r5);
/*8003142C 0002E22C*/ PPC::Runtime::ASM::blt(.L_80031434);
/*80031430 0002E230*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80031434, 0x80031434) //this is a jump label
/*80031434 0002E234*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80031438 0002E238*/ PPC::Runtime::ASM::b(.L_80031550);
RUNTIME_PPC_JUMP_LABEL(.L_8003143C, 0x8003143C) //this is a jump label
/*8003143C 0002E23C*/ PPC::Runtime::ASM::lis(context->r6, 0x4);
/*80031440 0002E240*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80031444 0002E244*/ PPC::Runtime::ASM::and.(context->r6, context->r0, context->r6);
/*80031448 0002E248*/ PPC::Runtime::ASM::beq(.L_80031490);
/*8003144C 0002E24C*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80031450 0002E250*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*80031454 0002E254*/ PPC::Runtime::ASM::bge(.L_80031474);
/*80031458 0002E258*/ PPC::Runtime::ASM::extsb.(context->r0, context->r4);
/*8003145C 0002E25C*/ PPC::Runtime::ASM::bgt(.L_8003146C);
/*80031460 0002E260*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80031464 0002E264*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
/*80031468 0002E268*/ PPC::Runtime::ASM::b(.L_80031488);
RUNTIME_PPC_JUMP_LABEL(.L_8003146C, 0x8003146C) //this is a jump label
/*8003146C 0002E26C*/ PPC::Runtime::ASM::subi(context->r27, context->r4, 0x1);
/*80031470 0002E270*/ PPC::Runtime::ASM::b(.L_80031488);
RUNTIME_PPC_JUMP_LABEL(.L_80031474, 0x80031474) //this is a jump label
/*80031474 0002E274*/ PPC::Runtime::ASM::bgt(.L_80031484);
/*80031478 0002E278*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8003147C 0002E27C*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
/*80031480 0002E280*/ PPC::Runtime::ASM::b(.L_80031488);
RUNTIME_PPC_JUMP_LABEL(.L_80031484, 0x80031484) //this is a jump label
/*80031484 0002E284*/ PPC::Runtime::ASM::subi(context->r27, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80031488, 0x80031488) //this is a jump label
/*80031488 0002E288*/ PPC::Runtime::ASM::li(context->r26, 0x1);
/*8003148C 0002E28C*/ PPC::Runtime::ASM::b(.L_80031550);
RUNTIME_PPC_JUMP_LABEL(.L_80031490, 0x80031490) //this is a jump label
/*80031490 0002E290*/ PPC::Runtime::ASM::lis(context->r6, 0x8);
/*80031494 0002E294*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*80031498 0002E298*/ PPC::Runtime::ASM::and.(context->r0, context->r0, context->r6);
/*8003149C 0002E29C*/ PPC::Runtime::ASM::beq(.L_80031550);
/*800314A0 0002E2A0*/ PPC::Runtime::ASM::extsb(context->r6, context->r4);
/*800314A4 0002E2A4*/ PPC::Runtime::ASM::cmpw(context->r6, context->r5);
/*800314A8 0002E2A8*/ PPC::Runtime::ASM::bge(.L_800314C8);
/*800314AC 0002E2AC*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*800314B0 0002E2B0*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*800314B4 0002E2B4*/ PPC::Runtime::ASM::blt(.L_800314C0);
/*800314B8 0002E2B8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800314BC 0002E2BC*/ PPC::Runtime::ASM::b(.L_800314E0);
RUNTIME_PPC_JUMP_LABEL(.L_800314C0, 0x800314C0) //this is a jump label
/*800314C0 0002E2C0*/ PPC::Runtime::ASM::addi(context->r27, context->r4, 0x1);
/*800314C4 0002E2C4*/ PPC::Runtime::ASM::b(.L_800314E0);
RUNTIME_PPC_JUMP_LABEL(.L_800314C8, 0x800314C8) //this is a jump label
/*800314C8 0002E2C8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800314CC 0002E2CC*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*800314D0 0002E2D0*/ PPC::Runtime::ASM::blt(.L_800314DC);
/*800314D4 0002E2D4*/ PPC::Runtime::ASM::extsb(context->r27, context->r5);
/*800314D8 0002E2D8*/ PPC::Runtime::ASM::b(.L_800314E0);
RUNTIME_PPC_JUMP_LABEL(.L_800314DC, 0x800314DC) //this is a jump label
/*800314DC 0002E2DC*/ PPC::Runtime::ASM::addi(context->r27, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800314E0, 0x800314E0) //this is a jump label
/*800314E0 0002E2E0*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*800314E4 0002E2E4*/ PPC::Runtime::ASM::b(.L_80031550);
RUNTIME_PPC_JUMP_LABEL(.L_800314E8, 0x800314E8) //this is a jump label
/*800314E8 0002E2E8*/ PPC::Runtime::ASM::lis(context->r5, 0x4);
/*800314EC 0002E2EC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*800314F0 0002E2F0*/ PPC::Runtime::ASM::and.(context->r5, context->r0, context->r5);
/*800314F4 0002E2F4*/ PPC::Runtime::ASM::beq(.L_80031518);
/*800314F8 0002E2F8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r4);
/*800314FC 0002E2FC*/ PPC::Runtime::ASM::bgt(.L_8003150C);
/*80031500 0002E300*/ PPC::Runtime::ASM::subi(context->r0, context->r6, 0x1);
/*80031504 0002E304*/ PPC::Runtime::ASM::extsb(context->r27, context->r0);
/*80031508 0002E308*/ PPC::Runtime::ASM::b(.L_80031510);
RUNTIME_PPC_JUMP_LABEL(.L_8003150C, 0x8003150C) //this is a jump label
/*8003150C 0002E30C*/ PPC::Runtime::ASM::subi(context->r27, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80031510, 0x80031510) //this is a jump label
/*80031510 0002E310*/ PPC::Runtime::ASM::li(context->r26, 0x1);
/*80031514 0002E314*/ PPC::Runtime::ASM::b(.L_80031550);
RUNTIME_PPC_JUMP_LABEL(.L_80031518, 0x80031518) //this is a jump label
/*80031518 0002E318*/ PPC::Runtime::ASM::lis(context->r5, 0x8);
/*8003151C 0002E31C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2);
/*80031520 0002E320*/ PPC::Runtime::ASM::and.(context->r0, context->r0, context->r5);
/*80031524 0002E324*/ PPC::Runtime::ASM::beq(.L_80031550);
/*80031528 0002E328*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8003152C 0002E32C*/ PPC::Runtime::ASM::extsb(context->r6, context->r4);
/*80031530 0002E330*/ PPC::Runtime::ASM::xoris(context->r5, context->r3, 0x8000);
/*80031534 0002E334*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80031538 0002E338*/ PPC::Runtime::ASM::subf(context->r3, context->r3, context->r6);
/*8003153C 0002E33C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80031540 0002E340*/ PPC::Runtime::ASM::addc(context->r3, context->r3, context->r5);
/*80031544 0002E344*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80031548 0002E348*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r3);
/*8003154C 0002E34C*/ PPC::Runtime::ASM::andc(context->r27, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80031550, 0x80031550) //this is a jump label
/*80031550 0002E350*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*80031554 0002E354*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80031558 0002E358*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8003155C 0002E35C*/ PPC::Runtime::ASM::beq(.L_80031668);
/*80031560 0002E360*/ PPC::Runtime::ASM::bl(fn_80061620);
/*80031564 0002E364*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r30));
/*80031568 0002E368*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8003156C 0002E36C*/ PPC::Runtime::ASM::bl(fn_80030A48);
/*80031570 0002E370*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80031574 0002E374*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80031578 0002E378*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*8003157C 0002E37C*/ PPC::Runtime::ASM::bl(fn_8013579C);
/*80031580 0002E380*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80031584 0002E384*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80031588 0002E388*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*8003158C 0002E38C*/ PPC::Runtime::ASM::bl(fn_CSS_updateMachineSelectFrame);
/*80031590 0002E390*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80031594 0002E394*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80031598 0002E398*/ PPC::Runtime::ASM::bl(fn_800301F0);
/*8003159C 0002E39C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800315A0 0002E3A0*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800315A4 0002E3A4*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*800315A8 0002E3A8*/ PPC::Runtime::ASM::bl(fn_800307AC);
/*800315AC 0002E3AC*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r30));
/*800315B0 0002E3B0*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r29);
/*800315B4 0002E3B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r30));
/*800315B8 0002E3B8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800315BC 0002E3BC*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*800315C0 0002E3C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r4));
/*800315C4 0002E3C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61, context->r3));
/*800315C8 0002E3C8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800315CC 0002E3CC*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x1d0);
/*800315D0 0002E3D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r3));
/*800315D4 0002E3D4*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r29);
/*800315D8 0002E3D8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
/*800315DC 0002E3DC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800315E0 0002E3E0*/ PPC::Runtime::ASM::bne(.L_800315F0);
/*800315E4 0002E3E4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800315E8 0002E3E8*/ PPC::Runtime::ASM::bl(fn_80135674);
/*800315EC 0002E3EC*/ PPC::Runtime::ASM::b(.L_8003163C);
RUNTIME_PPC_JUMP_LABEL(.L_800315F0, 0x800315F0) //this is a jump label
/*800315F0 0002E3F0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*800315F4 0002E3F4*/ PPC::Runtime::ASM::ble(.L_80031604);
/*800315F8 0002E3F8*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800315FC 0002E3FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80031600 0002E400*/ PPC::Runtime::ASM::bne(.L_80031634);
RUNTIME_PPC_JUMP_LABEL(.L_80031604, 0x80031604) //this is a jump label
/*80031604 0002E404*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r29);
/*80031608 0002E408*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r3));
/*8003160C 0002E40C*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80031610 0002E410*/ PPC::Runtime::ASM::add(context->r4, context->r26, context->r29);
/*80031614 0002E414*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80031618 0002E418*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r4));
/*8003161C 0002E41C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80031620 0002E420*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80031624 0002E424*/ PPC::Runtime::ASM::add(context->r4, context->r26, context->r0);
/*80031628 0002E428*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r4));
/*8003162C 0002E42C*/ PPC::Runtime::ASM::bl(fn_CSS_updateMachineImage);
/*80031630 0002E430*/ PPC::Runtime::ASM::b(.L_8003163C);
RUNTIME_PPC_JUMP_LABEL(.L_80031634, 0x80031634) //this is a jump label
/*80031634 0002E434*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80031638 0002E438*/ PPC::Runtime::ASM::bl(fn_80135674);
RUNTIME_PPC_JUMP_LABEL(.L_8003163C, 0x8003163C) //this is a jump label
/*8003163C 0002E43C*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80031640 0002E440*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80031644 0002E444*/ PPC::Runtime::ASM::add(context->r5, context->r31, context->r0);
/*80031648 0002E448*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*8003164C 0002E44C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r5));
/*80031650 0002E450*/ PPC::Runtime::ASM::bl(fn_80135A14);
/*80031654 0002E454*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80031658 0002E458*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8003165C 0002E45C*/ PPC::Runtime::ASM::bl(fn_8002FB3C);
/*80031660 0002E460*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80031664 0002E464*/ PPC::Runtime::ASM::b(.L_8003166C);
RUNTIME_PPC_JUMP_LABEL(.L_80031668, 0x80031668) //this is a jump label
/*80031668 0002E468*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8003166C, 0x8003166C) //this is a jump label
/*8003166C 0002E46C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80031670 0002E470*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80031674 0002E474*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80031678 0002E478*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003167C 0002E47C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80031680 0002E480*/ PPC::Runtime::ASM::blr();
}