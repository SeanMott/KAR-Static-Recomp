//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8039EF98(PPC::Runtime::GCContext* context)
{
/*8039EF98 0039BD98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8039EF9C 0039BD9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039EFA0 0039BDA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8039EFA4 0039BDA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039EFA8 0039BDA8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039EFAC 0039BDAC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x38);
/*8039EFB0 0039BDB0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039EFB4 0039BDB4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039EFB8 0039BDB8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039EFBC 0039BDBC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039EFC0 0039BDC0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r12));
/*8039EFC4 0039BDC4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039EFC8 0039BDC8*/ PPC::Runtime::ASM::bctrl();
/*8039EFCC 0039BDCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*8039EFD0 0039BDD0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039EFD4 0039BDD4*/ PPC::Runtime::ASM::beq(.L_8039EFF0);
/*8039EFD8 0039BDD8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039EFDC 0039BDDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039EFE0 0039BDE0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039EFE4 0039BDE4*/ PPC::Runtime::ASM::bctrl();
/*8039EFE8 0039BDE8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039EFEC 0039BDEC*/ PPC::Runtime::ASM::b(.L_8039EFF4);
RUNTIME_PPC_JUMP_LABEL(.L_8039EFF0, 0x8039EFF0) //this is a jump label
/*8039EFF0 0039BDF0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039EFF4, 0x8039EFF4) //this is a jump label
/*8039EFF4 0039BDF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*8039EFF8 0039BDF8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039EFFC 0039BDFC*/ PPC::Runtime::ASM::beq(.L_8039F014);
/*8039F000 0039BE00*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F004 0039BE04*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039F008 0039BE08*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F00C 0039BE0C*/ PPC::Runtime::ASM::bctrl();
/*8039F010 0039BE10*/ PPC::Runtime::ASM::b(.L_8039F018);
RUNTIME_PPC_JUMP_LABEL(.L_8039F014, 0x8039F014) //this is a jump label
/*8039F014 0039BE14*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F018, 0x8039F018) //this is a jump label
/*8039F018 0039BE18*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8039F01C 0039BE1C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r29);
/*8039F020 0039BE20*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8039F024 0039BE24*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5050 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039F028 0039BE28*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*8039F02C 0039BE2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039F030 0039BE30*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E505C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039F034 0039BE34*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039F038 0039BE38*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039F03C 0039BE3C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8039F040 0039BE40*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*8039F044 0039BE44*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8039F048 0039BE48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*8039F04C 0039BE4C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039F050 0039BE50*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8039F054 0039BE54*/ PPC::Runtime::ASM::beq(.L_8039F074);
/*8039F058 0039BE58*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*8039F05C 0039BE5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F060 0039BE60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039F064 0039BE64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F068 0039BE68*/ PPC::Runtime::ASM::bctrl();
/*8039F06C 0039BE6C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039F070 0039BE70*/ PPC::Runtime::ASM::b(.L_8039F078);
RUNTIME_PPC_JUMP_LABEL(.L_8039F074, 0x8039F074) //this is a jump label
/*8039F074 0039BE74*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F078, 0x8039F078) //this is a jump label
/*8039F078 0039BE78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*8039F07C 0039BE7C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F080 0039BE80*/ PPC::Runtime::ASM::beq(.L_8039F098);
/*8039F084 0039BE84*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F088 0039BE88*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039F08C 0039BE8C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F090 0039BE90*/ PPC::Runtime::ASM::bctrl();
/*8039F094 0039BE94*/ PPC::Runtime::ASM::b(.L_8039F09C);
RUNTIME_PPC_JUMP_LABEL(.L_8039F098, 0x8039F098) //this is a jump label
/*8039F098 0039BE98*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F09C, 0x8039F09C) //this is a jump label
/*8039F09C 0039BE9C*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r30);
/*8039F0A0 0039BEA0*/ PPC::Runtime::ASM::subf(context->r0, context->r29, context->r0);
/*8039F0A4 0039BEA4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r31));
/*8039F0A8 0039BEA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*8039F0AC 0039BEAC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F0B0 0039BEB0*/ PPC::Runtime::ASM::beq(.L_8039F0CC);
/*8039F0B4 0039BEB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F0B8 0039BEB8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039F0BC 0039BEBC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F0C0 0039BEC0*/ PPC::Runtime::ASM::bctrl();
/*8039F0C4 0039BEC4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039F0C8 0039BEC8*/ PPC::Runtime::ASM::b(.L_8039F0D0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F0CC, 0x8039F0CC) //this is a jump label
/*8039F0CC 0039BECC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F0D0, 0x8039F0D0) //this is a jump label
/*8039F0D0 0039BED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*8039F0D4 0039BED4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F0D8 0039BED8*/ PPC::Runtime::ASM::beq(.L_8039F0F0);
/*8039F0DC 0039BEDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F0E0 0039BEE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039F0E4 0039BEE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F0E8 0039BEE8*/ PPC::Runtime::ASM::bctrl();
/*8039F0EC 0039BEEC*/ PPC::Runtime::ASM::b(.L_8039F0F4);
RUNTIME_PPC_JUMP_LABEL(.L_8039F0F0, 0x8039F0F0) //this is a jump label
/*8039F0F0 0039BEF0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F0F4, 0x8039F0F4) //this is a jump label
/*8039F0F4 0039BEF4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r29);
/*8039F0F8 0039BEF8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*8039F0FC 0039BEFC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8039F100 0039BF00*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*8039F104 0039BF04*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r31));
/*8039F108 0039BF08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*8039F10C 0039BF0C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F110 0039BF10*/ PPC::Runtime::ASM::beq(.L_8039F12C);
/*8039F114 0039BF14*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F118 0039BF18*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039F11C 0039BF1C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F120 0039BF20*/ PPC::Runtime::ASM::bctrl();
/*8039F124 0039BF24*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039F128 0039BF28*/ PPC::Runtime::ASM::b(.L_8039F130);
RUNTIME_PPC_JUMP_LABEL(.L_8039F12C, 0x8039F12C) //this is a jump label
/*8039F12C 0039BF2C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F130, 0x8039F130) //this is a jump label
/*8039F130 0039BF30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*8039F134 0039BF34*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F138 0039BF38*/ PPC::Runtime::ASM::beq(.L_8039F150);
/*8039F13C 0039BF3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F140 0039BF40*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8039F144 0039BF44*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F148 0039BF48*/ PPC::Runtime::ASM::bctrl();
/*8039F14C 0039BF4C*/ PPC::Runtime::ASM::b(.L_8039F154);
RUNTIME_PPC_JUMP_LABEL(.L_8039F150, 0x8039F150) //this is a jump label
/*8039F150 0039BF50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F154, 0x8039F154) //this is a jump label
/*8039F154 0039BF54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*8039F158 0039BF58*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r29);
/*8039F15C 0039BF5C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16e, context->r31));
/*8039F160 0039BF60*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8039F164 0039BF64*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r30);
/*8039F168 0039BF68*/ PPC::Runtime::ASM::beq(.L_8039F188);
/*8039F16C 0039BF6C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8039F170 0039BF70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8039F174 0039BF74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039F178 0039BF78*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F17C 0039BF7C*/ PPC::Runtime::ASM::bctrl();
/*8039F180 0039BF80*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039F184 0039BF84*/ PPC::Runtime::ASM::b(.L_8039F18C);
RUNTIME_PPC_JUMP_LABEL(.L_8039F188, 0x8039F188) //this is a jump label
/*8039F188 0039BF88*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F18C, 0x8039F18C) //this is a jump label
/*8039F18C 0039BF8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*8039F190 0039BF90*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F194 0039BF94*/ PPC::Runtime::ASM::beq(.L_8039F1AC);
/*8039F198 0039BF98*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F19C 0039BF9C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8039F1A0 0039BFA0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F1A4 0039BFA4*/ PPC::Runtime::ASM::bctrl();
/*8039F1A8 0039BFA8*/ PPC::Runtime::ASM::b(.L_8039F1B0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F1AC, 0x8039F1AC) //this is a jump label
/*8039F1AC 0039BFAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F1B0, 0x8039F1B0) //this is a jump label
/*8039F1B0 0039BFB0*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11a, context->r31));
/*8039F1B4 0039BFB4*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r29);
/*8039F1B8 0039BFB8*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*8039F1BC 0039BFBC*/ PPC::Runtime::ASM::subf(context->r3, context->r30, context->r0);
/*8039F1C0 0039BFC0*/ PPC::Runtime::ASM::srwi(context->r0, context->r3, 31);
/*8039F1C4 0039BFC4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8039F1C8 0039BFC8*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 1);
/*8039F1CC 0039BFCC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16a, context->r31));
/*8039F1D0 0039BFD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*8039F1D4 0039BFD4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F1D8 0039BFD8*/ PPC::Runtime::ASM::beq(.L_8039F1F4);
/*8039F1DC 0039BFDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F1E0 0039BFE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039F1E4 0039BFE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F1E8 0039BFE8*/ PPC::Runtime::ASM::bctrl();
/*8039F1EC 0039BFEC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039F1F0 0039BFF0*/ PPC::Runtime::ASM::b(.L_8039F1F8);
RUNTIME_PPC_JUMP_LABEL(.L_8039F1F4, 0x8039F1F4) //this is a jump label
/*8039F1F4 0039BFF4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F1F8, 0x8039F1F8) //this is a jump label
/*8039F1F8 0039BFF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*8039F1FC 0039BFFC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F200 0039C000*/ PPC::Runtime::ASM::beq(.L_8039F218);
/*8039F204 0039C004*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F208 0039C008*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8039F20C 0039C00C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F210 0039C010*/ PPC::Runtime::ASM::bctrl();
/*8039F214 0039C014*/ PPC::Runtime::ASM::b(.L_8039F21C);
RUNTIME_PPC_JUMP_LABEL(.L_8039F218, 0x8039F218) //this is a jump label
/*8039F218 0039C018*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F21C, 0x8039F21C) //this is a jump label
/*8039F21C 0039C01C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*8039F220 0039C020*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r29);
/*8039F224 0039C024*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11a, context->r31));
/*8039F228 0039C028*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8039F22C 0039C02C*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r30);
/*8039F230 0039C030*/ PPC::Runtime::ASM::beq(.L_8039F250);
/*8039F234 0039C034*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8039F238 0039C038*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8039F23C 0039C03C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039F240 0039C040*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F244 0039C044*/ PPC::Runtime::ASM::bctrl();
/*8039F248 0039C048*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039F24C 0039C04C*/ PPC::Runtime::ASM::b(.L_8039F254);
RUNTIME_PPC_JUMP_LABEL(.L_8039F250, 0x8039F250) //this is a jump label
/*8039F250 0039C050*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F254, 0x8039F254) //this is a jump label
/*8039F254 0039C054*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*8039F258 0039C058*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F25C 0039C05C*/ PPC::Runtime::ASM::beq(.L_8039F274);
/*8039F260 0039C060*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F264 0039C064*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039F268 0039C068*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F26C 0039C06C*/ PPC::Runtime::ASM::bctrl();
/*8039F270 0039C070*/ PPC::Runtime::ASM::b(.L_8039F278);
RUNTIME_PPC_JUMP_LABEL(.L_8039F274, 0x8039F274) //this is a jump label
/*8039F274 0039C074*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F278, 0x8039F278) //this is a jump label
/*8039F278 0039C078*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*8039F27C 0039C07C*/ PPC::Runtime::ASM::add(context->r28, context->r3, context->r29);
/*8039F280 0039C080*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r31));
/*8039F284 0039C084*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8039F288 0039C088*/ PPC::Runtime::ASM::add(context->r28, context->r0, context->r28);
/*8039F28C 0039C08C*/ PPC::Runtime::ASM::beq(.L_8039F2AC);
/*8039F290 0039C090*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8039F294 0039C094*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8039F298 0039C098*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039F29C 0039C09C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F2A0 0039C0A0*/ PPC::Runtime::ASM::bctrl();
/*8039F2A4 0039C0A4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039F2A8 0039C0A8*/ PPC::Runtime::ASM::b(.L_8039F2B0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F2AC, 0x8039F2AC) //this is a jump label
/*8039F2AC 0039C0AC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F2B0, 0x8039F2B0) //this is a jump label
/*8039F2B0 0039C0B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*8039F2B4 0039C0B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F2B8 0039C0B8*/ PPC::Runtime::ASM::beq(.L_8039F2D0);
/*8039F2BC 0039C0BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F2C0 0039C0C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039F2C4 0039C0C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F2C8 0039C0C8*/ PPC::Runtime::ASM::bctrl();
/*8039F2CC 0039C0CC*/ PPC::Runtime::ASM::b(.L_8039F2D4);
RUNTIME_PPC_JUMP_LABEL(.L_8039F2D0, 0x8039F2D0) //this is a jump label
/*8039F2D0 0039C0D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F2D4, 0x8039F2D4) //this is a jump label
/*8039F2D4 0039C0D4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r29);
/*8039F2D8 0039C0D8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*8039F2DC 0039C0DC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8039F2E0 0039C0E0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8039F2E4 0039C0E4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r28);
/*8039F2E8 0039C0E8*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*8039F2EC 0039C0EC*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8039F2F0 0039C0F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8039F2F4 0039C0F4*/ PPC::Runtime::ASM::sth(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r31));
/*8039F2F8 0039C0F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8039F2FC 0039C0FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8039F300 0039C100*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039F304 0039C104*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039F308 0039C108*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039F30C 0039C10C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039F310 0039C110*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039F314 0039C114*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8039F318 0039C118*/ PPC::Runtime::ASM::blr();
}