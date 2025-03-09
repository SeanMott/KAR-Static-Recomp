//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80488938.hpp"
#include "OSGetTime.hpp"
#include "fn_IPGetMtu.hpp"
#include "OSGetTime.hpp"
#include "fn_80488978.hpp"
#include "fn_80489044.hpp"
#include "fn_8047B0A0.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_IPGetConfigError.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_IPClearConfigError.hpp"
#include "fn_8047B578.hpp"
#include "fn_8047B0A0.hpp"
#include "OSGetTime.hpp"
#include "OSGetTime.hpp"
#include "fn_80488978.hpp"
#include "fn_804828C4.hpp"
#include "fn_80482910.hpp"
#include "fn_SOSocket.hpp"
#include "fn_SOBind.hpp"
#include "fn_80489270.hpp"



void fn_80487368(PPC::Runtime::GCContext* context)
{
/*80487368 00484168*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8048736C 0048416C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80487370 00484170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80487374 00484174*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80487378 00484178*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8048737C 0048417C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80487380 00484180*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80487384 00484184*/ PPC::Runtime::ASM::bl(fn_80488938);
/*80487388 00484188*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8048738C 0048418C*/ PPC::Runtime::ASM::bne(.L_8048761C);
/*80487390 00484190*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487394 00484194*/ PPC::Runtime::ASM::addi(context->r31, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487398 00484198*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8048739C 0048419C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*804873A0 004841A0*/ PPC::Runtime::ASM::beq(.L_8048761C);
/*804873A4 004841A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*804873A8 004841A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804873AC 004841AC*/ PPC::Runtime::ASM::bne(.L_804873D0);
/*804873B0 004841B0*/ PPC::Runtime::ASM::bl(OSGetTime);
/*804873B4 004841B4*/ PPC::Runtime::ASM::lis(context->r5, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*804873B8 004841B8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*804873BC 004841BC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*804873C0 004841C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*804873C4 004841C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*804873C8 004841C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*804873CC 004841CC*/ PPC::Runtime::ASM::b(.L_8048761C);
RUNTIME_PPC_JUMP_LABEL(.L_804873D0, 0x804873D0) //this is a jump label
/*804873D0 004841D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804873D4 004841D4*/ PPC::Runtime::ASM::bne(.L_80487450);
/*804873D8 004841D8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*804873DC 004841DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804873E0 004841E0*/ PPC::Runtime::ASM::bl(fn_IPGetMtu);
/*804873E4 004841E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804873E8 004841E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804873EC 004841EC*/ PPC::Runtime::ASM::bne(.L_804873FC);
/*804873F0 004841F0*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*804873F4 004841F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*804873F8 004841F8*/ PPC::Runtime::ASM::b(.L_80487450);
RUNTIME_PPC_JUMP_LABEL(.L_804873FC, 0x804873FC) //this is a jump label
/*804873FC 004841FC*/ PPC::Runtime::ASM::bl(OSGetTime);
/*80487400 00484200*/ PPC::Runtime::ASM::lis(context->r6, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487404 00484204*/ PPC::Runtime::ASM::lis(context->r5, 0x73e);
/*80487408 00484208*/ PPC::Runtime::ASM::addi(context->r7, context->r6, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*8048740C 0048420C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80487410 00484210*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*80487414 00484214*/ PPC::Runtime::ASM::subi(context->r6, context->r5, 0xea0);
/*80487418 00484218*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*8048741C 0048421C*/ PPC::Runtime::ASM::xoris(context->r5, context->r0, 0x8000);
/*80487420 00484220*/ PPC::Runtime::ASM::subfc(context->r4, context->r8, context->r4);
/*80487424 00484224*/ PPC::Runtime::ASM::subfe(context->r0, context->r7, context->r3);
/*80487428 00484228*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*8048742C 0048422C*/ PPC::Runtime::ASM::subfc(context->r0, context->r4, context->r6);
/*80487430 00484230*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r5);
/*80487434 00484234*/ PPC::Runtime::ASM::subfe(context->r3, context->r5, context->r5);
/*80487438 00484238*/ PPC::Runtime::ASM::neg.(context->r3, context->r3);
/*8048743C 0048423C*/ PPC::Runtime::ASM::beq(.L_8048761C);
/*80487440 00484240*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80487444 00484244*/ PPC::Runtime::ASM::bl(fn_80488978);
/*80487448 00484248*/ PPC::Runtime::ASM::b(.L_8048761C);
/*8048744C 0048424C*/ PPC::Runtime::ASM::b(.L_8048761C);
RUNTIME_PPC_JUMP_LABEL(.L_80487450, 0x80487450) //this is a jump label
/*80487450 00484250*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80487454 00484254*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80487458 00484258*/ PPC::Runtime::ASM::bne(.L_804874A0);
/*8048745C 0048425C*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487460 00484260*/ PPC::Runtime::ASM::addi(context->r3, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487464 00484264*/ PPC::Runtime::ASM::addis(context->r3, context->r3, 0x1);
/*80487468 00484268*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x7bd4, context->r3));
/*8048746C 0048426C*/ PPC::Runtime::ASM::bl(fn_80489044);
/*80487470 00484270*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487474 00484274*/ PPC::Runtime::ASM::addi(context->r3, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487478 00484278*/ PPC::Runtime::ASM::addis(context->r3, context->r3, 0x1);
/*8048747C 0048427C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x7bd0);
/*80487480 00484280*/ PPC::Runtime::ASM::bl(fn_8047B0A0);
/*80487484 00484284*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487488 00484288*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8048748C 0048428C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487490 00484290*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80487494 00484294*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80487498 00484298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8048749C 0048429C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_804874A0, 0x804874A0) //this is a jump label
/*804874A0 004842A0*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*804874A4 004842A4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*804874A8 004842A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*804874AC 004842AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804874B0 004842B0*/ PPC::Runtime::ASM::beq(.L_80487538);
/*804874B4 004842B4*/ PPC::Runtime::ASM::bge(.L_80487588);
/*804874B8 004842B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804874BC 004842BC*/ PPC::Runtime::ASM::bge(.L_804874C4);
/*804874C0 004842C0*/ PPC::Runtime::ASM::b(.L_80487588);
RUNTIME_PPC_JUMP_LABEL(.L_804874C4, 0x804874C4) //this is a jump label
/*804874C4 004842C4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804874C8 004842C8*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*804874CC 004842CC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804874D0 004842D0*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*804874D4 004842D4*/ PPC::Runtime::ASM::bl(fn_IPGetConfigError);
/*804874D8 004842D8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*804874DC 004842DC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*804874E0 004842E0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804874E4 004842E4*/ PPC::Runtime::ASM::cmpwi(context->r30, -0x64);
/*804874E8 004842E8*/ PPC::Runtime::ASM::bne(.L_80487588);
/*804874EC 004842EC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804874F0 004842F0*/ PPC::Runtime::ASM::bl(fn_IPClearConfigError);
/*804874F4 004842F4*/ PPC::Runtime::ASM::bl(fn_8047B578);
/*804874F8 004842F8*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*804874FC 004842FC*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80487500 00484300*/ PPC::Runtime::ASM::addi(context->r3, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487504 00484304*/ PPC::Runtime::ASM::addis(context->r3, context->r3, 0x1);
/*80487508 00484308*/ PPC::Runtime::ASM::addi(context->r0, context->r4, -0x8000);
/*8048750C 0048430C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x7bc4, context->r3));
/*80487510 00484310*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x7bd0);
/*80487514 00484314*/ PPC::Runtime::ASM::bl(fn_8047B0A0);
/*80487518 00484318*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8048751C 0048431C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80487520 00484320*/ PPC::Runtime::ASM::bl(OSGetTime);
/*80487524 00484324*/ PPC::Runtime::ASM::lis(context->r5, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487528 00484328*/ PPC::Runtime::ASM::addi(context->r5, context->r5, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*8048752C 0048432C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*80487530 00484330*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*80487534 00484334*/ PPC::Runtime::ASM::b(.L_80487588);
RUNTIME_PPC_JUMP_LABEL(.L_80487538, 0x80487538) //this is a jump label
/*80487538 00484338*/ PPC::Runtime::ASM::bl(OSGetTime);
/*8048753C 0048433C*/ PPC::Runtime::ASM::lis(context->r6, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487540 00484340*/ PPC::Runtime::ASM::lis(context->r5, 0xc11e);
/*80487544 00484344*/ PPC::Runtime::ASM::addi(context->r7, context->r6, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487548 00484348*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8048754C 0048434C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80487550 00484350*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x7a00);
/*80487554 00484354*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*80487558 00484358*/ PPC::Runtime::ASM::xoris(context->r5, context->r0, 0x8000);
/*8048755C 0048435C*/ PPC::Runtime::ASM::subfc(context->r4, context->r8, context->r4);
/*80487560 00484360*/ PPC::Runtime::ASM::subfe(context->r0, context->r7, context->r3);
/*80487564 00484364*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*80487568 00484368*/ PPC::Runtime::ASM::subfc(context->r0, context->r6, context->r4);
/*8048756C 0048436C*/ PPC::Runtime::ASM::subfe(context->r5, context->r5, context->r3);
/*80487570 00484370*/ PPC::Runtime::ASM::subfe(context->r5, context->r3, context->r3);
/*80487574 00484374*/ PPC::Runtime::ASM::neg.(context->r5, context->r5);
/*80487578 00484378*/ PPC::Runtime::ASM::bne(.L_80487588);
/*8048757C 0048437C*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*80487580 00484380*/ PPC::Runtime::ASM::bl(fn_80488978);
/*80487584 00484384*/ PPC::Runtime::ASM::b(.L_8048761C);
RUNTIME_PPC_JUMP_LABEL(.L_80487588, 0x80487588) //this is a jump label
/*80487588 00484388*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*8048758C 0048438C*/ PPC::Runtime::ASM::bl(fn_804828C4);
/*80487590 00484390*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80487594 00484394*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80487598 00484398*/ PPC::Runtime::ASM::beq(.L_8048761C);
/*8048759C 0048439C*/ PPC::Runtime::ASM::lis(context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*804875A0 004843A0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*804875A4 004843A4*/ PPC::Runtime::ASM::stw(context->r0, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*804875A8 004843A8*/ PPC::Runtime::ASM::bl(fn_80482910);
/*804875AC 004843AC*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*804875B0 004843B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804875B4 004843B4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*804875B8 004843B8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*804875BC 004843BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*804875C0 004843C0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*804875C4 004843C4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*804875C8 004843C8*/ PPC::Runtime::ASM::bl(fn_SOSocket);
/*804875CC 004843CC*/ PPC::Runtime::ASM::lis(context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*804875D0 004843D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*804875D4 004843D4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*804875D8 004843D8*/ PPC::Runtime::ASM::li(context->r6, 0x8);
/*804875DC 004843DC*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*804875E0 004843E0*/ PPC::Runtime::ASM::li(context->r0, 0x6786);
/*804875E4 004843E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*804875E8 004843E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*804875EC 004843EC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804875F0 004843F0*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804875F4 004843F4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r1));
/*804875F8 004843F8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
/*804875FC 004843FC*/ PPC::Runtime::ASM::bl(fn_SOBind);
/*80487600 00484400*/ PPC::Runtime::ASM::bl(fn_80489270);
/*80487604 00484404*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487608 00484408*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8048760C 0048440C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487610 00484410*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80487614 00484414*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80487618 00484418*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8048761C, 0x8048761C) //this is a jump label
/*8048761C 0048441C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80487620 00484420*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80487624 00484424*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80487628 00484428*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8048762C 0048442C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80487630 00484430*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80487634 00484434*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80487638 00484438*/ PPC::Runtime::ASM::blr();
}