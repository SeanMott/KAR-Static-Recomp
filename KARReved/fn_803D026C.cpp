//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803CAB74.hpp"
#include "fn_803CB628.hpp"
#include "fn_GXClearVtxDesc.hpp"
#include "fn_GXSetVtxDesc.hpp"
#include "fn_GXSetVtxDesc.hpp"
#include "fn_GXSetVtxAttrFmt.hpp"
#include "fn_GXSetVtxAttrFmt.hpp"
#include "fn_803CFB3C.hpp"
#include "fn_803CA4D4.hpp"
#include "fn_803CAF94.hpp"



void fn_803D026C(PPC::Runtime::GCContext* context)
{
/*803D026C 003CD06C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D0270 003CD070*/ PPC::Runtime::ASM::lis(context->r4, lbl_8056D2C0 @ Get_MemoryOffset_HighBit);
/*803D0274 003CD074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D0278 003CD078*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803D027C 003CD07C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D0280 003CD080*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D0284 003CD084*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_8056D2C0 @ Get_MemoryOffset_LowBit);
/*803D0288 003CD088*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F9FF0 @ Get_MemoryOffset_HighBit);
/*803D028C 003CD08C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D0290 003CD090*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804F9FF0 @ Get_MemoryOffset_LowBit);
/*803D0294 003CD094*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D0298 003CD098*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*803D029C 003CD09C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803D02A0 003CD0A0*/ PPC::Runtime::ASM::bl(fn_803CAB74);
/*803D02A4 003CD0A4*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803D02A8 003CD0A8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xd8);
/*803D02AC 003CD0AC*/ PPC::Runtime::ASM::bl(fn_803CB628);
/*803D02B0 003CD0B0*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*803D02B4 003CD0B4*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*803D02B8 003CD0B8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803D02BC 003CD0BC*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*803D02C0 003CD0C0*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*803D02C4 003CD0C4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803D02C8 003CD0C8*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*803D02CC 003CD0CC*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803D02D0 003CD0D0*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*803D02D4 003CD0D4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803D02D8 003CD0D8*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*803D02DC 003CD0DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803D02E0 003CD0E0*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*803D02E4 003CD0E4*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803D02E8 003CD0E8*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*803D02EC 003CD0EC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803D02F0 003CD0F0*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*803D02F4 003CD0F4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803D02F8 003CD0F8*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*803D02FC 003CD0FC*/ PPC::Runtime::ASM::li(context->r29, 0x13);
RUNTIME_PPC_JUMP_LABEL(.L_803D0300, 0x803D0300) //this is a jump label
/*803D0300 003CD100*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*803D0304 003CD104*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3);
/*803D0308 003CD108*/ PPC::Runtime::ASM::add(context->r6, context->r31, context->r0);
/*803D030C 003CD10C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d2, context->r6));
/*803D0310 003CD110*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803D0314 003CD114*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r6));
/*803D0318 003CD118*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d1, context->r6));
/*803D031C 003CD11C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*803D0320 003CD120*/ PPC::Runtime::ASM::mulli(context->r6, context->r5, 0xc);
/*803D0324 003CD124*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xc);
/*803D0328 003CD128*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r6);
/*803D032C 003CD12C*/ PPC::Runtime::ASM::add(context->r5, context->r31, context->r5);
/*803D0330 003CD130*/ PPC::Runtime::ASM::add(context->r6, context->r31, context->r0);
/*803D0334 003CD134*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x240);
/*803D0338 003CD138*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x240);
/*803D033C 003CD13C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x240);
/*803D0340 003CD140*/ PPC::Runtime::ASM::bl(fn_803CFB3C);
/* 803D0344 003CD144  37 BD FF FF */ subic. context->r29 , context->r29 , 0x1
/*803D0348 003CD148*/ PPC::Runtime::ASM::bge(.L_803D0300);
/*803D034C 003CD14C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803D0350 003CD150*/ PPC::Runtime::ASM::bl(fn_803CA4D4);
/*803D0354 003CD154*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803D0358 003CD158*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xd8);
/*803D035C 003CD15C*/ PPC::Runtime::ASM::bl(fn_803CAF94);
/*803D0360 003CD160*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D0364 003CD164*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D0368 003CD168*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D036C 003CD16C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D0370 003CD170*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D0374 003CD174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803D0378 003CD178*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D037C 003CD17C*/ PPC::Runtime::ASM::blr();
}