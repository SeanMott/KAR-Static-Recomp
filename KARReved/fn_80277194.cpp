//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D1D3C.hpp"
#include "fn_80276D1C.hpp"



void fn_80277194(PPC::Runtime::GCContext* context)
{
/*80277194 00273F94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80277198 00273F98*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027719C 00273F9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802771A0 00273FA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802771A4 00273FA4*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*802771A8 00273FA8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802771AC 00273FAC*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*802771B0 00273FB0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802771B4 00273FB4*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*802771B8 00273FB8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802771BC 00273FBC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*802771C0 00273FC0*/ PPC::Runtime::ASM::bl(fn_800D1D3C);
/*802771C4 00273FC4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*802771C8 00273FC8*/ PPC::Runtime::ASM::beq(.L_802771F0);
/*802771CC 00273FCC*/ PPC::Runtime::ASM::bge(.L_802771DC);
/*802771D0 00273FD0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*802771D4 00273FD4*/ PPC::Runtime::ASM::beq(.L_802771E8);
/*802771D8 00273FD8*/ PPC::Runtime::ASM::b(.L_80277230);
RUNTIME_PPC_JUMP_LABEL(.L_802771DC, 0x802771DC) //this is a jump label
/*802771DC 00273FDC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x6);
/*802771E0 00273FE0*/ PPC::Runtime::ASM::bge(.L_80277230);
/*802771E4 00273FE4*/ PPC::Runtime::ASM::b(.L_80277200);
RUNTIME_PPC_JUMP_LABEL(.L_802771E8, 0x802771E8) //this is a jump label
/*802771E8 00273FE8*/ PPC::Runtime::ASM::li(context->r7, lbl_805D7400 @ Get_MemoryOffset_SDA21);
/*802771EC 00273FEC*/ PPC::Runtime::ASM::b(.L_80277238);
RUNTIME_PPC_JUMP_LABEL(.L_802771F0, 0x802771F0) //this is a jump label
/*802771F0 00273FF0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B8EDC @ Get_MemoryOffset_HighBit);
/*802771F4 00273FF4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804B8EDC @ Get_MemoryOffset_LowBit);
/*802771F8 00273FF8*/ PPC::Runtime::ASM::mr(context->r7, context->r0);
/*802771FC 00273FFC*/ PPC::Runtime::ASM::b(.L_80277238);
RUNTIME_PPC_JUMP_LABEL(.L_80277200, 0x80277200) //this is a jump label
/*80277200 00274000*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r28));
/*80277204 00274004*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80277208 00274008*/ PPC::Runtime::ASM::bne(.L_80277214);
/*8027720C 0027400C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80277210 00274010*/ PPC::Runtime::ASM::b(.L_80277298);
RUNTIME_PPC_JUMP_LABEL(.L_80277214, 0x80277214) //this is a jump label
/*80277214 00274014*/ PPC::Runtime::ASM::bl(fn_80276D1C);
/*80277218 00274018*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8027721C 0027401C*/ PPC::Runtime::ASM::beq(.L_80277228);
/*80277220 00274020*/ PPC::Runtime::ASM::li(context->r7, lbl_805D7408 @ Get_MemoryOffset_SDA21);
/*80277224 00274024*/ PPC::Runtime::ASM::b(.L_80277238);
RUNTIME_PPC_JUMP_LABEL(.L_80277228, 0x80277228) //this is a jump label
/*80277228 00274028*/ PPC::Runtime::ASM::li(context->r7, lbl_805D740C @ Get_MemoryOffset_SDA21);
/*8027722C 0027402C*/ PPC::Runtime::ASM::b(.L_80277238);
RUNTIME_PPC_JUMP_LABEL(.L_80277230, 0x80277230) //this is a jump label
/*80277230 00274030*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80277234 00274034*/ PPC::Runtime::ASM::b(.L_80277298);
RUNTIME_PPC_JUMP_LABEL(.L_80277238, 0x80277238) //this is a jump label
/*80277238 00274038*/ PPC::Runtime::ASM::mr(context->r5, context->r7);
/*8027723C 0027403C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80277240 00274040*/ PPC::Runtime::ASM::b(.L_80277288);
RUNTIME_PPC_JUMP_LABEL(.L_80277244, 0x80277244) //this is a jump label
/*80277244 00274044*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80277248 00274048*/ PPC::Runtime::ASM::mtctr(context->r30);
/*8027724C 0027404C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80277250 00274050*/ PPC::Runtime::ASM::ble(.L_80277280);
RUNTIME_PPC_JUMP_LABEL(.L_80277254, 0x80277254) //this is a jump label
/*80277254 00274054*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80277258 00274058*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8027725C 0027405C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80277260 00274060*/ PPC::Runtime::ASM::bne(.L_80277278);
/*80277264 00274064*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*80277268 00274068*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8027726C 0027406C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r7, context->r0);
/*80277270 00274070*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80277274 00274074*/ PPC::Runtime::ASM::b(.L_80277298);
RUNTIME_PPC_JUMP_LABEL(.L_80277278, 0x80277278) //this is a jump label
/*80277278 00274078*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*8027727C 0027407C*/ PPC::Runtime::ASM::bdnz(.L_80277254);
RUNTIME_PPC_JUMP_LABEL(.L_80277280, 0x80277280) //this is a jump label
/*80277280 00274080*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*80277284 00274084*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80277288, 0x80277288) //this is a jump label
/*80277288 00274088*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8027728C 0027408C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80277290 00274090*/ PPC::Runtime::ASM::bne(.L_80277244);
/*80277294 00274094*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80277298, 0x80277298) //this is a jump label
/*80277298 00274098*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8027729C 0027409C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802772A0 002740A0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802772A4 002740A4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802772A8 002740A8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802772AC 002740AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802772B0 002740B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802772B4 002740B4*/ PPC::Runtime::ASM::blr();
}