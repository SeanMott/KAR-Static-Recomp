//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn_hsdAllocMemPiece.hpp"
#include "fn___assert.hpp"



void fn_HSD_TExpCnst(PPC::Runtime::GCContext* context)
{
/*804221E0 0041EFE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*804221E4 0041EFE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*804221E8 0041EFE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804221EC 0041EFEC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*804221F0 0041EFF0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/* 804221F4 0041EFF4  7C DE 33 79 */ mr. context->r30 , context->r6
/*804221F8 0041EFF8*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*804221FC 0041EFFC*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80422200 0041F000*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80422204 0041F004*/ PPC::Runtime::ASM::bne(.L_8042221C);
/*80422208 0041F008*/ PPC::Runtime::ASM::lis(context->r4, lbl_80504950 @ Get_MemoryOffset_HighBit);
/*8042220C 0041F00C*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422210 0041F010*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80504950 @ Get_MemoryOffset_LowBit);
/*80422214 0041F014*/ PPC::Runtime::ASM::li(context->r4, 0x16a);
/*80422218 0041F018*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8042221C, 0x8042221C) //this is a jump label
/*8042221C 0041F01C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80422220 0041F020*/ PPC::Runtime::ASM::b(.L_80422274);
RUNTIME_PPC_JUMP_LABEL(.L_80422224, 0x80422224) //this is a jump label
/*80422224 0041F024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80422228 0041F028*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8042222C 0041F02C*/ PPC::Runtime::ASM::bne(.L_80422270);
/*80422230 0041F030*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80422234 0041F034*/ PPC::Runtime::ASM::cmplw(context->r0, context->r27);
/*80422238 0041F038*/ PPC::Runtime::ASM::bne(.L_80422270);
/*8042223C 0041F03C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80422240 0041F040*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*80422244 0041F044*/ PPC::Runtime::ASM::bne(.L_80422270);
/*80422248 0041F048*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*8042224C 0041F04C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r29);
/*80422250 0041F050*/ PPC::Runtime::ASM::beq(.L_80422268);
/*80422254 0041F054*/ PPC::Runtime::ASM::lis(context->r4, lbl_8050495C @ Get_MemoryOffset_HighBit);
/*80422258 0041F058*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*8042225C 0041F05C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_8050495C @ Get_MemoryOffset_LowBit);
/*80422260 0041F060*/ PPC::Runtime::ASM::li(context->r4, 0x171);
/*80422264 0041F064*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422268, 0x80422268) //this is a jump label
/*80422268 0041F068*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8042226C 0041F06C*/ PPC::Runtime::ASM::b(.L_804222E8);
RUNTIME_PPC_JUMP_LABEL(.L_80422270, 0x80422270) //this is a jump label
/*80422270 0041F070*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80422274, 0x80422274) //this is a jump label
/*80422274 0041F074*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80422278 0041F078*/ PPC::Runtime::ASM::bne(.L_80422224);
/*8042227C 0041F07C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x7);
/*80422280 0041F080*/ PPC::Runtime::ASM::bne(.L_8042228C);
/*80422284 0041F084*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80422288 0041F088*/ PPC::Runtime::ASM::b(.L_804222E8);
RUNTIME_PPC_JUMP_LABEL(.L_8042228C, 0x8042228C) //this is a jump label
/*8042228C 0041F08C*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*80422290 0041F090*/ PPC::Runtime::ASM::bl(fn_hsdAllocMemPiece);
/* 80422294 0041F094  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80422298 0041F098*/ PPC::Runtime::ASM::bne(.L_804222AC);
/*8042229C 0041F09C*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*804222A0 0041F0A0*/ PPC::Runtime::ASM::li(context->r4, 0x47);
/*804222A4 0041F0A4*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_479 @ Get_MemoryOffset_SDA21);
/*804222A8 0041F0A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804222AC, 0x804222AC) //this is a jump label
/*804222AC 0041F0AC*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*804222B0 0041F0B0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*804222B4 0041F0B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*804222B8 0041F0B8*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*804222BC 0041F0BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804222C0 0041F0C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804222C4 0041F0C4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804222C8 0041F0C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804222CC 0041F0CC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*804222D0 0041F0D0*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*804222D4 0041F0D4*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*804222D8 0041F0D8*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*804222DC 0041F0DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*804222E0 0041F0E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r31));
/*804222E4 0041F0E4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_804222E8, 0x804222E8) //this is a jump label
/*804222E8 0041F0E8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*804222EC 0041F0EC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*804222F0 0041F0F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804222F4 0041F0F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804222F8 0041F0F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804222FC 0041F0FC*/ PPC::Runtime::ASM::blr();
}