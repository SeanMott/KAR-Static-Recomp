//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80098E30(PPC::Runtime::GCContext* context)
{
/*80098E30 00095C30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80098E34 00095C34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80098E38 00095C38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80098E3C 00095C3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80098E40 00095C40*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80098E44 00095C44*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80098E48 00095C48*/ PPC::Runtime::ASM::bl(fn_GXSetColorUpdate);
/*80098E4C 00095C4C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80098E50 00095C50*/ PPC::Runtime::ASM::bl(fn_GXSetAlphaUpdate);
/*80098E54 00095C54*/ PPC::Runtime::ASM::subfic(context->r0, context->r31, 0x2);
/*80098E58 00095C58*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80098E5C 00095C5C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*80098E60 00095C60*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80098E64 00095C64*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*80098E68 00095C68*/ PPC::Runtime::ASM::li(context->r6, 0x5);
/*80098E6C 00095C6C*/ PPC::Runtime::ASM::bl(fn_GXSetBlendMode);
/*80098E70 00095C70*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80098E74 00095C74*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80098E78 00095C78*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80098E7C 00095C7C*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80098E80 00095C80*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80098E84 00095C84*/ PPC::Runtime::ASM::bl(fn_GXSetAlphaCompare);
/*80098E88 00095C88*/ PPC::Runtime::ASM::subfic(context->r3, context->r31, 0x2);
/*80098E8C 00095C8C*/ PPC::Runtime::ASM::subi(context->r0, context->r31, 0x2);
/*80098E90 00095C90*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*80098E94 00095C94*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80098E98 00095C98*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80098E9C 00095C9C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80098EA0 00095CA0*/ PPC::Runtime::ASM::bl(fn_GXSetZMode);
/*80098EA4 00095CA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80098EA8 00095CA8*/ PPC::Runtime::ASM::bl(fn_GXSetZCompLoc);
/*80098EAC 00095CAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80098EB0 00095CB0*/ PPC::Runtime::ASM::bl(fn_GXSetNumTexGens);
/*80098EB4 00095CB4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80098EB8 00095CB8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80098EBC 00095CBC*/ PPC::Runtime::ASM::bl(fn_GX_blr);
/*80098EC0 00095CC0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80098EC4 00095CC4*/ PPC::Runtime::ASM::bl(fn_GXSetNumTevStages);
/*80098EC8 00095CC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80098ECC 00095CCC*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*80098ED0 00095CD0*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*80098ED4 00095CD4*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80098ED8 00095CD8*/ PPC::Runtime::ASM::bl(fn_GXSetTevOrder);
/*80098EDC 00095CDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80098EE0 00095CE0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80098EE4 00095CE4*/ PPC::Runtime::ASM::bl(fn_GXSetTevOp);
/*80098EE8 00095CE8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DEFF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80098EEC 00095CEC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*80098EF0 00095CF0*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80098EF4 00095CF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80098EF8 00095CF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80098EFC 00095CFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80098F00 00095D00*/ PPC::Runtime::ASM::bl(fn_GXSetChanMatColor);
/*80098F04 00095D04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80098F08 00095D08*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80098F0C 00095D0C*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80098F10 00095D10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80098F14 00095D14*/ PPC::Runtime::ASM::bl(fn_GXSetChanAmbColor);
/*80098F18 00095D18*/ PPC::Runtime::ASM::bl(fn_HSD_LObjGetLightMaskDiffuse);
/*80098F1C 00095D1C*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*80098F20 00095D20*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80098F24 00095D24*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80098F28 00095D28*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80098F2C 00095D2C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80098F30 00095D30*/ PPC::Runtime::ASM::li(context->r8, 0x2);
/*80098F34 00095D34*/ PPC::Runtime::ASM::li(context->r9, 0x2);
/*80098F38 00095D38*/ PPC::Runtime::ASM::bl(fn_GXSetChanCtrl);
/*80098F3C 00095D3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80098F40 00095D40*/ PPC::Runtime::ASM::bl(fn_GXSetNumChans);
/*80098F44 00095D44*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80098F48 00095D48*/ PPC::Runtime::ASM::bl(fn_GXSetCullMode);
/*80098F4C 00095D4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80098F50 00095D50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80098F54 00095D54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80098F58 00095D58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80098F5C 00095D5C*/ PPC::Runtime::ASM::blr();
}