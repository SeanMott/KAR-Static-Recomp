//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028B050.hpp"
#include "fn_8028B050.hpp"
#include "fn_8028B11C.hpp"
#include "fn_8028B11C.hpp"
#include "fn_8028B11C.hpp"
#include "fn_8028B050.hpp"
#include "fn_8028B11C.hpp"
#include "fn_8028B11C.hpp"
#include "fn_80379F94.hpp"



void fn_8037A3B0(PPC::Runtime::GCContext* context)
{
/*8037A3B0 003771B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*8037A3B4 003771B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037A3B8 003771B8*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BD20C @ Get_MemoryOffset_HighBit);
/*8037A3BC 003771BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8037A3C0 003771C0*/ PPC::Runtime::ASM::addi(context->r0, context->r6, lbl_804BD20C @ Get_MemoryOffset_LowBit);
/*8037A3C4 003771C4*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8037A3C8 003771C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8037A3CC 003771CC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8037A3D0 003771D0*/ PPC::Runtime::ASM::li(context->r4, 0x294);
/*8037A3D4 003771D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8037A3D8 003771D8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8037A3DC 003771DC*/ PPC::Runtime::ASM::mr(context->r7, context->r30);
/*8037A3E0 003771E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD230 @ Get_MemoryOffset_HighBit);
/*8037A3E4 003771E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8037A3E8 003771E8*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8037A3EC 003771EC*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804BD230 @ Get_MemoryOffset_LowBit);
/*8037A3F0 003771F0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8037A3F4 003771F4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037A3F8 003771F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8037A3FC 003771FC*/ PPC::Runtime::ASM::mr(context->r0, context->r7);
/*8037A400 00377200*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A404 00377204*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A408 00377208*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8037A40C 0037720C*/ PPC::Runtime::ASM::li(context->r5, 0x1e0);
/*8037A410 00377210*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8037A414 00377214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*8037A418 00377218*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*8037A41C 0037721C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8037A420 00377220*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8037A424 00377224*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*8037A428 00377228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r30));
/*8037A42C 0037722C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*8037A430 00377230*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DDB90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A434 00377234*/ PPC::Runtime::ASM::bl(fn_8028B050);
/*8037A438 00377238*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x24);
/*8037A43C 0037723C*/ PPC::Runtime::ASM::li(context->r4, 0x294);
/*8037A440 00377240*/ PPC::Runtime::ASM::li(context->r5, 0x1e0);
/*8037A444 00377244*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8037A448 00377248*/ PPC::Runtime::ASM::bl(fn_8028B050);
/*8037A44C 0037724C*/ PPC::Runtime::ASM::li(context->r3, 0x280);
/*8037A450 00377250*/ PPC::Runtime::ASM::li(context->r4, 0x1e0);
/*8037A454 00377254*/ PPC::Runtime::ASM::bl(fn_8028B11C);
/*8037A458 00377258*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8037A45C 0037725C*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*8037A460 00377260*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*8037A464 00377264*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A468 00377268*/ PPC::Runtime::ASM::beq(.L_8037A49C);
/*8037A46C 0037726C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BD1B8 @ Get_MemoryOffset_HighBit);
/*8037A470 00377270*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD1E8 @ Get_MemoryOffset_HighBit);
/*8037A474 00377274*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804BD1B8 @ Get_MemoryOffset_LowBit);
/*8037A478 00377278*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A47C 0037727C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A480 00377280*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BD1E8 @ Get_MemoryOffset_LowBit);
/*8037A484 00377284*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDBA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A488 00377288*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A48C 0037728C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8037A490 00377290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8037A494 00377294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8037A498 00377298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8037A49C, 0x8037A49C) //this is a jump label
/*8037A49C 0037729C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8037A4A0 003772A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A4A4 003772A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8037A4A8 003772A8*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*8037A4AC 003772AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8037A4B0 003772B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037A4B4 003772B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8037A4B8 003772B8*/ PPC::Runtime::ASM::beq(.L_8037A4E4);
/*8037A4BC 003772BC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8037A4C0 003772C0*/ PPC::Runtime::ASM::beq(.L_8037A4DC);
/*8037A4C4 003772C4*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8037A4C8 003772C8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A4CC 003772CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A4D0 003772D0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A4D4 003772D4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A4D8 003772D8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A4DC, 0x8037A4DC) //this is a jump label
/*8037A4DC 003772DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8037A4E0 003772E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8037A4E4, 0x8037A4E4) //this is a jump label
/*8037A4E4 003772E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8037A4E8 003772E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A4EC 003772EC*/ PPC::Runtime::ASM::beq(.L_8037A504);
/*8037A4F0 003772F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A4F4 003772F4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A4F8 003772F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A4FC 003772FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A500 00377300*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A504, 0x8037A504) //this is a jump label
/*8037A504 00377304*/ PPC::Runtime::ASM::li(context->r3, 0x18);
/*8037A508 00377308*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8037A50C 0037730C  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8037A510 00377310*/ PPC::Runtime::ASM::beq(.L_8037A564);
/*8037A514 00377314*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD15C @ Get_MemoryOffset_HighBit);
/*8037A518 00377318*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD18C @ Get_MemoryOffset_HighBit);
/*8037A51C 0037731C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD15C @ Get_MemoryOffset_LowBit);
/*8037A520 00377320*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037A524 00377324*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804BD18C @ Get_MemoryOffset_LowBit);
/*8037A528 00377328*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x24);
/*8037A52C 0037732C*/ PPC::Runtime::ASM::li(context->r3, 0x280);
/*8037A530 00377330*/ PPC::Runtime::ASM::stw(context->r28, STRUCT_BYTE4_COUNT_1805DDBE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A534 00377334*/ PPC::Runtime::ASM::li(context->r4, 0x1e0);
/*8037A538 00377338*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037A53C 0037733C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8037A540 00377340*/ PPC::Runtime::ASM::bl(fn_8028B11C);
/*8037A544 00377344*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8037A548 00377348*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8037A54C 0037734C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8037A550 00377350*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8037A554 00377354*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8037A558 00377358*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8037A55C 0037735C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*8037A560 00377360*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8037A564, 0x8037A564) //this is a jump label
/*8037A564 00377364*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*8037A568 00377368*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A56C 0037736C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8037A570 00377370*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8037A574 00377374*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8037A578 00377378*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037A57C 0037737C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8037A580 00377380*/ PPC::Runtime::ASM::beq(.L_8037A5A8);
/*8037A584 00377384*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A588 00377388*/ PPC::Runtime::ASM::beq(.L_8037A5A0);
/*8037A58C 0037738C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A590 00377390*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A594 00377394*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A598 00377398*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A59C 0037739C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A5A0, 0x8037A5A0) //this is a jump label
/*8037A5A0 003773A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8037A5A4 003773A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8037A5A8, 0x8037A5A8) //this is a jump label
/*8037A5A8 003773A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8037A5AC 003773AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A5B0 003773B0*/ PPC::Runtime::ASM::beq(.L_8037A5C8);
/*8037A5B4 003773B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A5B8 003773B8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A5BC 003773BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A5C0 003773C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A5C4 003773C4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A5C8, 0x8037A5C8) //this is a jump label
/*8037A5C8 003773C8*/ PPC::Runtime::ASM::li(context->r3, 0x20);
/*8037A5CC 003773CC*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8037A5D0 003773D0  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8037A5D4 003773D4*/ PPC::Runtime::ASM::beq(.L_8037A624);
/*8037A5D8 003773D8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD100 @ Get_MemoryOffset_HighBit);
/*8037A5DC 003773DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD12C @ Get_MemoryOffset_HighBit);
/*8037A5E0 003773E0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD100 @ Get_MemoryOffset_LowBit);
/*8037A5E4 003773E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037A5E8 003773E8*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804BD12C @ Get_MemoryOffset_LowBit);
/*8037A5EC 003773EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A5F0 003773F0*/ PPC::Runtime::ASM::li(context->r3, 0x280);
/*8037A5F4 003773F4*/ PPC::Runtime::ASM::stw(context->r28, STRUCT_BYTE4_COUNT_1805DDB9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A5F8 003773F8*/ PPC::Runtime::ASM::li(context->r4, 0x1e0);
/*8037A5FC 003773FC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037A600 00377400*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8037A604 00377404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8037A608 00377408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8037A60C 0037740C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8037A610 00377410*/ PPC::Runtime::ASM::bl(fn_8028B11C);
/*8037A614 00377414*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8037A618 00377418*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A61C 0037741C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*8037A620 00377420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8037A624, 0x8037A624) //this is a jump label
/*8037A624 00377424*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*8037A628 00377428*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A62C 0037742C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8037A630 00377430*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8037A634 00377434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8037A638 00377438*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037A63C 0037743C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8037A640 00377440*/ PPC::Runtime::ASM::beq(.L_8037A668);
/*8037A644 00377444*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A648 00377448*/ PPC::Runtime::ASM::beq(.L_8037A660);
/*8037A64C 0037744C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A650 00377450*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A654 00377454*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A658 00377458*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A65C 0037745C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A660, 0x8037A660) //this is a jump label
/*8037A660 00377460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8037A664 00377464*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8037A668, 0x8037A668) //this is a jump label
/*8037A668 00377468*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8037A66C 0037746C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A670 00377470*/ PPC::Runtime::ASM::beq(.L_8037A688);
/*8037A674 00377474*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A678 00377478*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A67C 0037747C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A680 00377480*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A684 00377484*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A688, 0x8037A688) //this is a jump label
/*8037A688 00377488*/ PPC::Runtime::ASM::li(context->r3, 0x2c);
/*8037A68C 0037748C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8037A690 00377490  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8037A694 00377494*/ PPC::Runtime::ASM::beq(.L_8037A6DC);
/*8037A698 00377498*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD0A4 @ Get_MemoryOffset_HighBit);
/*8037A69C 0037749C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD0D4 @ Get_MemoryOffset_HighBit);
/*8037A6A0 003774A0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD0A4 @ Get_MemoryOffset_LowBit);
/*8037A6A4 003774A4*/ PPC::Runtime::ASM::li(context->r5, 0x1e0);
/*8037A6A8 003774A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037A6AC 003774AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD0D4 @ Get_MemoryOffset_LowBit);
/*8037A6B0 003774B0*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x4);
/*8037A6B4 003774B4*/ PPC::Runtime::ASM::li(context->r4, 0x294);
/*8037A6B8 003774B8*/ PPC::Runtime::ASM::stw(context->r28, STRUCT_BYTE4_COUNT_1805DDBE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A6BC 003774BC*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8037A6C0 003774C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037A6C4 003774C4*/ PPC::Runtime::ASM::bl(fn_8028B050);
/*8037A6C8 003774C8*/ PPC::Runtime::ASM::li(context->r3, 0x280);
/*8037A6CC 003774CC*/ PPC::Runtime::ASM::li(context->r4, 0x1e0);
/*8037A6D0 003774D0*/ PPC::Runtime::ASM::bl(fn_8028B11C);
/*8037A6D4 003774D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*8037A6D8 003774D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8037A6DC, 0x8037A6DC) //this is a jump label
/*8037A6DC 003774DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8037A6E0 003774E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A6E4 003774E4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8037A6E8 003774E8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8037A6EC 003774EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8037A6F0 003774F0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037A6F4 003774F4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8037A6F8 003774F8*/ PPC::Runtime::ASM::beq(.L_8037A720);
/*8037A6FC 003774FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A700 00377500*/ PPC::Runtime::ASM::beq(.L_8037A718);
/*8037A704 00377504*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A708 00377508*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A70C 0037750C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A710 00377510*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A714 00377514*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A718, 0x8037A718) //this is a jump label
/*8037A718 00377518*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8037A71C 0037751C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8037A720, 0x8037A720) //this is a jump label
/*8037A720 00377520*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8037A724 00377524*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A728 00377528*/ PPC::Runtime::ASM::beq(.L_8037A740);
/*8037A72C 0037752C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A730 00377530*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A734 00377534*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A738 00377538*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A73C 0037753C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A740, 0x8037A740) //this is a jump label
/*8037A740 00377540*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8037A744 00377544*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*8037A748 00377548*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A74C 0037754C*/ PPC::Runtime::ASM::beq(.L_8037A76C);
/*8037A750 00377550*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BD048 @ Get_MemoryOffset_HighBit);
/*8037A754 00377554*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD074 @ Get_MemoryOffset_HighBit);
/*8037A758 00377558*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804BD048 @ Get_MemoryOffset_LowBit);
/*8037A75C 0037755C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A760 00377560*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD074 @ Get_MemoryOffset_LowBit);
/*8037A764 00377564*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A768 00377568*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8037A76C, 0x8037A76C) //this is a jump label
/*8037A76C 0037756C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8037A770 00377570*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A774 00377574*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037A778 00377578*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*8037A77C 0037757C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037A780 00377580*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037A784 00377584*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8037A788 00377588*/ PPC::Runtime::ASM::beq(.L_8037A7B4);
/*8037A78C 0037758C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8037A790 00377590*/ PPC::Runtime::ASM::beq(.L_8037A7AC);
/*8037A794 00377594*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8037A798 00377598*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A79C 0037759C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A7A0 003775A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A7A4 003775A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A7A8 003775A8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A7AC, 0x8037A7AC) //this is a jump label
/*8037A7AC 003775AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8037A7B0 003775B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8037A7B4, 0x8037A7B4) //this is a jump label
/*8037A7B4 003775B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037A7B8 003775B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A7BC 003775BC*/ PPC::Runtime::ASM::beq(.L_8037A7D4);
/*8037A7C0 003775C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A7C4 003775C4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A7C8 003775C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A7CC 003775CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A7D0 003775D0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A7D4, 0x8037A7D4) //this is a jump label
/*8037A7D4 003775D4*/ PPC::Runtime::ASM::li(context->r3, 0x8);
/*8037A7D8 003775D8*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8037A7DC 003775DC  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8037A7E0 003775E0*/ PPC::Runtime::ASM::beq(.L_8037A810);
/*8037A7E4 003775E4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BCFEC @ Get_MemoryOffset_HighBit);
/*8037A7E8 003775E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD01C @ Get_MemoryOffset_HighBit);
/*8037A7EC 003775EC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BCFEC @ Get_MemoryOffset_LowBit);
/*8037A7F0 003775F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037A7F4 003775F4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD01C @ Get_MemoryOffset_LowBit);
/*8037A7F8 003775F8*/ PPC::Runtime::ASM::li(context->r3, 0x280);
/*8037A7FC 003775FC*/ PPC::Runtime::ASM::li(context->r4, 0x1e0);
/*8037A800 00377600*/ PPC::Runtime::ASM::stw(context->r28, STRUCT_BYTE4_COUNT_1805DDB94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A804 00377604*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037A808 00377608*/ PPC::Runtime::ASM::bl(fn_8028B11C);
/*8037A80C 0037760C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8037A810, 0x8037A810) //this is a jump label
/*8037A810 00377610*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*8037A814 00377614*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A818 00377618*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8037A81C 0037761C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8037A820 00377620*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8037A824 00377624*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037A828 00377628*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037A82C 0037762C*/ PPC::Runtime::ASM::beq(.L_8037A854);
/*8037A830 00377630*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A834 00377634*/ PPC::Runtime::ASM::beq(.L_8037A84C);
/*8037A838 00377638*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A83C 0037763C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A840 00377640*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A844 00377644*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A848 00377648*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A84C, 0x8037A84C) //this is a jump label
/*8037A84C 0037764C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037A850 00377650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8037A854, 0x8037A854) //this is a jump label
/*8037A854 00377654*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8037A858 00377658*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A85C 0037765C*/ PPC::Runtime::ASM::beq(.L_8037A874);
/*8037A860 00377660*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A864 00377664*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A868 00377668*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A86C 0037766C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A870 00377670*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A874, 0x8037A874) //this is a jump label
/*8037A874 00377674*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*8037A878 00377678*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*8037A87C 0037767C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A880 00377680*/ PPC::Runtime::ASM::beq(.L_8037A8A8);
/*8037A884 00377684*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BCF90 @ Get_MemoryOffset_HighBit);
/*8037A888 00377688*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BCFBC @ Get_MemoryOffset_HighBit);
/*8037A88C 0037768C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804BCF90 @ Get_MemoryOffset_LowBit);
/*8037A890 00377690*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A894 00377694*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A898 00377698*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BCFBC @ Get_MemoryOffset_LowBit);
/*8037A89C 0037769C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDBDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037A8A0 003776A0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A8A4 003776A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8037A8A8, 0x8037A8A8) //this is a jump label
/*8037A8A8 003776A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r30));
/*8037A8AC 003776AC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037A8B0 003776B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037A8B4 003776B4*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*8037A8B8 003776B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037A8BC 003776BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037A8C0 003776C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037A8C4 003776C4*/ PPC::Runtime::ASM::beq(.L_8037A8F0);
/*8037A8C8 003776C8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8037A8CC 003776CC*/ PPC::Runtime::ASM::beq(.L_8037A8E8);
/*8037A8D0 003776D0*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8037A8D4 003776D4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A8D8 003776D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A8DC 003776DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A8E0 003776E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A8E4 003776E4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A8E8, 0x8037A8E8) //this is a jump label
/*8037A8E8 003776E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037A8EC 003776EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8037A8F0, 0x8037A8F0) //this is a jump label
/*8037A8F0 003776F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037A8F4 003776F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037A8F8 003776F8*/ PPC::Runtime::ASM::beq(.L_8037A910);
/*8037A8FC 003776FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037A900 00377700*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037A904 00377704*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8037A908 00377708*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037A90C 0037770C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037A910, 0x8037A910) //this is a jump label
/*8037A910 00377710*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8037A914 00377714*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8037A918 00377718*/ PPC::Runtime::ASM::bl(fn_80433154);
/*8037A91C 0037771C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8037A920 00377720*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8037A924 00377724*/ PPC::Runtime::ASM::bl(fn_80379F94);
/*8037A928 00377728*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8037A92C 0037772C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8037A930 00377730*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8037A934 00377734*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8037A938 00377738*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8037A93C 0037773C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037A940 00377740*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037A944 00377744*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*8037A948 00377748*/ PPC::Runtime::ASM::blr();
}