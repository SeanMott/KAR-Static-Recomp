//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803CA9C0.hpp"
#include "fn_803CAB74.hpp"
#include "fn_803CB628.hpp"
#include "fn_GXClearVtxDesc.hpp"
#include "fn_GXSetVtxDesc.hpp"
#include "fn_GXSetVtxDesc.hpp"
#include "fn_GXSetVtxAttrFmt.hpp"
#include "fn_GXSetVtxAttrFmt.hpp"
#include "fn_GXSetVtxDesc.hpp"
#include "fn_GXSetVtxAttrFmt.hpp"
#include "fn_sin2.hpp"
#include "fn_sin2.hpp"
#include "fn_tanf.hpp"
#include "fn_tanf.hpp"
#include "fn_GXBegin.hpp"
#include "fn_tanf.hpp"
#include "fn_sin2.hpp"
#include "fn_803CA4D4.hpp"
#include "fn_803CAF94.hpp"



void fn_803CFEF0(PPC::Runtime::GCContext* context)
{
/*803CFEF0 003CCCF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803CFEF4 003CCCF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803CFEF8 003CCCF8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*803CFEFC 003CCCFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xd0, context->r1));
/*803CFF00 003CCD00*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*803CFF04 003CCD04*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*803CFF08 003CCD08*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*803CFF0C 003CCD0C*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*803CFF10 003CCD10*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*803CFF14 003CCD14*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803CFF18 003CCD18*/ PPC::Runtime::ASM::stfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803CFF1C 003CCD1C*/ PPC::Runtime::ASM::stfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803CFF20 003CCD20*/ PPC::Runtime::ASM::stfd(context->f23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803CFF24 003CCD24*/ PPC::Runtime::ASM::stfd(context->f22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803CFF28 003CCD28*/ PPC::Runtime::ASM::stfd(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803CFF2C 003CCD2C*/ PPC::Runtime::ASM::stfd(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803CFF30 003CCD30*/ PPC::Runtime::ASM::stfd(context->f19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*803CFF34 003CCD34*/ PPC::Runtime::ASM::stmw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803CFF38 003CCD38*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
/*803CFF3C 003CCD3C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 24);
/*803CFF40 003CCD40*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803CFF44 003CCD44*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*803CFF48 003CCD48*/ PPC::Runtime::ASM::mr(context->r21, context->r4);
/*803CFF4C 003CCD4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803CFF50 003CCD50*/ PPC::Runtime::ASM::lis(context->r4, lbl_8056D2C0 @ Get_MemoryOffset_HighBit);
/*803CFF54 003CCD54*/ PPC::Runtime::ASM::addi(context->r26, context->r4, lbl_8056D2C0 @ Get_MemoryOffset_LowBit);
/*803CFF58 003CCD58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803CFF5C 003CCD5C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*803CFF60 003CCD60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803CFF64 003CCD64*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*803CFF68 003CCD68*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803CFF6C 003CCD6C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803CFF70 003CCD70*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5880 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CFF74 003CCD74*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CFF78 003CCD78*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*803CFF7C 003CCD7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5888 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CFF80 003CCD80*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*803CFF84 003CCD84*/ PPC::Runtime::ASM::fdivs(context->f25, context->f4, context->f2);
/*803CFF88 003CCD88*/ PPC::Runtime::ASM::fdivs(context->f24, context->f1, context->f0);
/*803CFF8C 003CCD8C*/ PPC::Runtime::ASM::bl(fn_803CA9C0);
/*803CFF90 003CCD90*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*803CFF94 003CCD94*/ PPC::Runtime::ASM::bl(fn_803CAB74);
/*803CFF98 003CCD98*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803CFF9C 003CCD9C*/ PPC::Runtime::ASM::addi(context->r4, context->r26, 0xd8);
/*803CFFA0 003CCDA0*/ PPC::Runtime::ASM::bl(fn_803CB628);
/*803CFFA4 003CCDA4*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*803CFFA8 003CCDA8*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*803CFFAC 003CCDAC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803CFFB0 003CCDB0*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*803CFFB4 003CCDB4*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*803CFFB8 003CCDB8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803CFFBC 003CCDBC*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*803CFFC0 003CCDC0*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803CFFC4 003CCDC4*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*803CFFC8 003CCDC8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803CFFCC 003CCDCC*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*803CFFD0 003CCDD0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803CFFD4 003CCDD4*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*803CFFD8 003CCDD8*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803CFFDC 003CCDDC*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*803CFFE0 003CCDE0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803CFFE4 003CCDE4*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*803CFFE8 003CCDE8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803CFFEC 003CCDEC*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*803CFFF0 003CCDF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803CFFF4 003CCDF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803CFFF8 003CCDF8*/ PPC::Runtime::ASM::beq(.L_803D0020);
/*803CFFFC 003CCDFC*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*803D0000 003CCE00*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803D0004 003CCE04*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*803D0008 003CCE08*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803D000C 003CCE0C*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*803D0010 003CCE10*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803D0014 003CCE14*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*803D0018 003CCE18*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803D001C 003CCE1C*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
RUNTIME_PPC_JUMP_LABEL(.L_803D0020, 0x803D0020) //this is a jump label
/*803D0020 003CCE20*/ PPC::Runtime::ASM::clrlwi(context->r23, context->r21, 24);
/*803D0024 003CCE24*/ PPC::Runtime::ASM::lfd(context->f26, STRUCT_DOUBLE_COUNT_1805E5878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D0028 003CCE28*/ PPC::Runtime::ASM::addi(context->r0, context->r23, 0x1);
/*803D002C 003CCE2C*/ PPC::Runtime::ASM::lfs(context->f28, STRUCT_FLOAT_COUNT_1805E5870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D0030 003CCE30*/ PPC::Runtime::ASM::lfd(context->f30, STRUCT_DOUBLE_COUNT_1805E5880 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D0034 003CCE34*/ PPC::Runtime::ASM::slwi(context->r25, context->r0, 1);
/*803D0038 003CCE38*/ PPC::Runtime::ASM::clrlwi(context->r24, context->r22, 24);
/*803D003C 003CCE3C*/ PPC::Runtime::ASM::li(context->r22, 0x0);
/*803D0040 003CCE40*/ PPC::Runtime::ASM::lis(context->r29, 0x4330);
/*803D0044 003CCE44*/ PPC::Runtime::ASM::lis(context->r30, 0xcc01);
/*803D0048 003CCE48*/ PPC::Runtime::ASM::b(.L_803D0208);
RUNTIME_PPC_JUMP_LABEL(.L_803D004C, 0x803D004C) //this is a jump label
/*803D004C 003CCE4C*/ PPC::Runtime::ASM::xoris(context->r27, context->r22, 0x8000);
/*803D0050 003CCE50*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803D0054 003CCE54*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D0058 003CCE58*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D005C 003CCE5C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f26);
/*803D0060 003CCE60*/ PPC::Runtime::ASM::fmuls(context->f20, context->f0, context->f25);
/*803D0064 003CCE64*/ PPC::Runtime::ASM::fmr(context->f1, context->f20);
/*803D0068 003CCE68*/ PPC::Runtime::ASM::fadds(context->f27, context->f20, context->f25);
/*803D006C 003CCE6C*/ PPC::Runtime::ASM::bl(fn_sin2);
/*803D0070 003CCE70*/ PPC::Runtime::ASM::fmuls(context->f23, context->f28, context->f1);
/*803D0074 003CCE74*/ PPC::Runtime::ASM::fmr(context->f1, context->f27);
/*803D0078 003CCE78*/ PPC::Runtime::ASM::bl(fn_sin2);
/*803D007C 003CCE7C*/ PPC::Runtime::ASM::fmuls(context->f22, context->f28, context->f1);
/*803D0080 003CCE80*/ PPC::Runtime::ASM::fmr(context->f1, context->f20);
/*803D0084 003CCE84*/ PPC::Runtime::ASM::bl(fn_tanf);
/*803D0088 003CCE88*/ PPC::Runtime::ASM::fmuls(context->f21, context->f28, context->f1);
/*803D008C 003CCE8C*/ PPC::Runtime::ASM::fmr(context->f1, context->f27);
/*803D0090 003CCE90*/ PPC::Runtime::ASM::bl(fn_tanf);
/*803D0094 003CCE94*/ PPC::Runtime::ASM::fmuls(context->f20, context->f28, context->f1);
/*803D0098 003CCE98*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r25, 16);
/*803D009C 003CCE9C*/ PPC::Runtime::ASM::li(context->r3, 0x98);
/*803D00A0 003CCEA0*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*803D00A4 003CCEA4*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*803D00A8 003CCEA8*/ PPC::Runtime::ASM::fdivs(context->f29, context->f20, context->f28);
/*803D00AC 003CCEAC*/ PPC::Runtime::ASM::addi(context->r0, context->r22, 0x1);
/*803D00B0 003CCEB0*/ PPC::Runtime::ASM::xoris(context->r31, context->r0, 0x8000);
/*803D00B4 003CCEB4*/ PPC::Runtime::ASM::li(context->r21, 0x0);
/*803D00B8 003CCEB8*/ PPC::Runtime::ASM::fdivs(context->f31, context->f21, context->f28);
/*803D00BC 003CCEBC*/ PPC::Runtime::ASM::b(.L_803D01FC);
RUNTIME_PPC_JUMP_LABEL(.L_803D00C0, 0x803D00C0) //this is a jump label
/*803D00C0 003CCEC0*/ PPC::Runtime::ASM::xoris(context->r28, context->r21, 0x8000);
/*803D00C4 003CCEC4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803D00C8 003CCEC8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D00CC 003CCECC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D00D0 003CCED0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f26);
/*803D00D4 003CCED4*/ PPC::Runtime::ASM::fmuls(context->f19, context->f0, context->f24);
/*803D00D8 003CCED8*/ PPC::Runtime::ASM::fmr(context->f1, context->f19);
/*803D00DC 003CCEDC*/ PPC::Runtime::ASM::bl(fn_tanf);
/*803D00E0 003CCEE0*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*803D00E4 003CCEE4*/ PPC::Runtime::ASM::fmr(context->f1, context->f19);
/*803D00E8 003CCEE8*/ PPC::Runtime::ASM::bl(fn_sin2);
/*803D00EC 003CCEEC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f27, context->f22);
/*803D00F0 003CCEF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D00F4 003CCEF4*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f22);
/*803D00F8 003CCEF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803D00FC 003CCEFC*/ PPC::Runtime::ASM::fdivs(context->f2, context->f0, context->f28);
/*803D0100 003CCF00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D0104 003CCF04*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D0108 003CCF08*/ PPC::Runtime::ASM::stfs(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D010C 003CCF0C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f3, context->f28);
/*803D0110 003CCF10*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D0114 003CCF14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D0118 003CCF18*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D011C 003CCF1C*/ PPC::Runtime::ASM::beq(.L_803D0170);
/*803D0120 003CCF20*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803D0124 003CCF24*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803D0128 003CCF28*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D012C 003CCF2C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803D0130 003CCF30*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D0134 003CCF34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D0138 003CCF38*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803D013C 003CCF3C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f26);
/*803D0140 003CCF40*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D0144 003CCF44*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803D0148 003CCF48*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D014C 003CCF4C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D0150 003CCF50*/ PPC::Runtime::ASM::fdivs(context->f3, context->f2, context->f0);
/*803D0154 003CCF54*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D0158 003CCF58*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D015C 003CCF5C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f26);
/*803D0160 003CCF60*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D0164 003CCF64*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803D0168 003CCF68*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*803D016C 003CCF6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803D0170, 0x803D0170) //this is a jump label
/*803D0170 003CCF70*/ PPC::Runtime::ASM::fmuls(context->f0, context->f27, context->f23);
/*803D0174 003CCF74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D0178 003CCF78*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f23);
/*803D017C 003CCF7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803D0180 003CCF80*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f28);
/*803D0184 003CCF84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D0188 003CCF88*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D018C 003CCF8C*/ PPC::Runtime::ASM::stfs(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D0190 003CCF90*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f28);
/*803D0194 003CCF94*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D0198 003CCF98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D019C 003CCF9C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D01A0 003CCFA0*/ PPC::Runtime::ASM::beq(.L_803D01F8);
/*803D01A4 003CCFA4*/ PPC::Runtime::ASM::xoris(context->r0, context->r21, 0x8000);
/*803D01A8 003CCFA8*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D01AC 003CCFAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D01B0 003CCFB0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D01B4 003CCFB4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D01B8 003CCFB8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D01BC 003CCFBC*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803D01C0 003CCFC0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D01C4 003CCFC4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f26);
/*803D01C8 003CCFC8*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803D01CC 003CCFCC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803D01D0 003CCFD0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D01D4 003CCFD4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803D01D8 003CCFD8*/ PPC::Runtime::ASM::fdivs(context->f2, context->f1, context->f0);
/*803D01DC 003CCFDC*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D01E0 003CCFE0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803D01E4 003CCFE4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f26);
/*803D01E8 003CCFE8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
/*803D01EC 003CCFEC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803D01F0 003CCFF0*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*803D01F4 003CCFF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803D01F8, 0x803D01F8) //this is a jump label
/*803D01F8 003CCFF8*/ PPC::Runtime::ASM::addi(context->r21, context->r21, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803D01FC, 0x803D01FC) //this is a jump label
/*803D01FC 003CCFFC*/ PPC::Runtime::ASM::cmpw(context->r21, context->r23);
/*803D0200 003CD000*/ PPC::Runtime::ASM::ble(.L_803D00C0);
/*803D0204 003CD004*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803D0208, 0x803D0208) //this is a jump label
/*803D0208 003CD008*/ PPC::Runtime::ASM::cmpw(context->r22, context->r24);
/*803D020C 003CD00C*/ PPC::Runtime::ASM::blt(.L_803D004C);
/*803D0210 003CD010*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*803D0214 003CD014*/ PPC::Runtime::ASM::bl(fn_803CA4D4);
/*803D0218 003CD018*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803D021C 003CD01C*/ PPC::Runtime::ASM::addi(context->r4, context->r26, 0xd8);
/*803D0220 003CD020*/ PPC::Runtime::ASM::bl(fn_803CAF94);
/*803D0224 003CD024*/ PPC::Runtime::ASM::lmw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803D0228 003CD028*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*803D022C 003CD02C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*803D0230 003CD030*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*803D0234 003CD034*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*803D0238 003CD038*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*803D023C 003CD03C*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*803D0240 003CD040*/ PPC::Runtime::ASM::lfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803D0244 003CD044*/ PPC::Runtime::ASM::lfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803D0248 003CD048*/ PPC::Runtime::ASM::lfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803D024C 003CD04C*/ PPC::Runtime::ASM::lfd(context->f23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803D0250 003CD050*/ PPC::Runtime::ASM::lfd(context->f22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803D0254 003CD054*/ PPC::Runtime::ASM::lfd(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803D0258 003CD058*/ PPC::Runtime::ASM::lfd(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803D025C 003CD05C*/ PPC::Runtime::ASM::lfd(context->f19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*803D0260 003CD060*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xd0);
/*803D0264 003CD064*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D0268 003CD068*/ PPC::Runtime::ASM::blr();
}