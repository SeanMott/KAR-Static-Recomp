//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8046149C.hpp"



void fn_80461224(PPC::Runtime::GCContext* context)
{
/*80461224 0045E024*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80461228 0045E028*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046122C 0045E02C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80461230 0045E030*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80461234 0045E034*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80461238 0045E038*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*8046123C 0045E03C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80461240 0045E040*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80461244 0045E044*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80461248 0045E048*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8046124C 0045E04C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80461250 0045E050*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80461254 0045E054*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80461258 0045E058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*8046125C 0045E05C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*80461260 0045E060*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*80461264 0045E064*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*80461268 0045E068*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8046126C 0045E06C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*80461270 0045E070*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*80461274 0045E074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*80461278 0045E078*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8046127C 0045E07C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80461280 0045E080*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80461284 0045E084*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80461288 0045E088*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8046128C 0045E08C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80461290 0045E090*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80461294 0045E094*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80461298 0045E098*/ PPC::Runtime::ASM::b(.L_804613F0);
RUNTIME_PPC_JUMP_LABEL(.L_8046129C, 0x8046129C) //this is a jump label
/*8046129C 0045E09C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*804612A0 0045E0A0*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*804612A4 0045E0A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*804612A8 0045E0A8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*804612AC 0045E0AC*/ PPC::Runtime::ASM::bl(fn_8046149C);
/*804612B0 0045E0B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804612B4 0045E0B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*804612B8 0045E0B8*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804612BC 0045E0BC*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804612C0 0045E0C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*804612C4 0045E0C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/*804612C8 0045E0C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*804612CC 0045E0CC*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804612D0 0045E0D0*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804612D4 0045E0D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*804612D8 0045E0D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*804612DC 0045E0DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*804612E0 0045E0E0*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804612E4 0045E0E4*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804612E8 0045E0E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*804612EC 0045E0EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r1));
/*804612F0 0045E0F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*804612F4 0045E0F4*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804612F8 0045E0F8*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804612FC 0045E0FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80461300 0045E100*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80461304 0045E104*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80461308 0045E108*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*8046130C 0045E10C*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80461310 0045E110*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80461314 0045E114*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r1));
/*80461318 0045E118*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8046131C 0045E11C*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*80461320 0045E120*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80461324 0045E124*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80461328 0045E128*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r1));
/*8046132C 0045E12C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80461330 0045E130*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*80461334 0045E134*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80461338 0045E138*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8046133C 0045E13C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r1));
/*80461340 0045E140*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*80461344 0045E144*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*80461348 0045E148*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*8046134C 0045E14C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*80461350 0045E150*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80461354 0045E154*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80461358 0045E158*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*8046135C 0045E15C*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80461360 0045E160*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80461364 0045E164*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r1));
/*80461368 0045E168*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*8046136C 0045E16C*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*80461370 0045E170*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80461374 0045E174*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80461378 0045E178*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
/*8046137C 0045E17C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80461380 0045E180*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*80461384 0045E184*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80461388 0045E188*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8046138C 0045E18C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17, context->r1));
/*80461390 0045E190*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80461394 0045E194*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*80461398 0045E198*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*8046139C 0045E19C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*804613A0 0045E1A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804613A4 0045E1A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*804613A8 0045E1A8*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804613AC 0045E1AC*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804613B0 0045E1B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*804613B4 0045E1B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r1));
/*804613B8 0045E1B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*804613BC 0045E1BC*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804613C0 0045E1C0*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804613C4 0045E1C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*804613C8 0045E1C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r1));
/*804613CC 0045E1CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*804613D0 0045E1D0*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804613D4 0045E1D4*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804613D8 0045E1D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*804613DC 0045E1DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r1));
/*804613E0 0045E1E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*804613E4 0045E1E4*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804613E8 0045E1E8*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804613EC 0045E1EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_804613F0, 0x804613F0) //this is a jump label
/* 804613F0 0045E1F0  57 C0 06 3F */ clrlwi. context->r0 , context->r30 , 24
/*804613F4 0045E1F4*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x1);
/*804613F8 0045E1F8*/ PPC::Runtime::ASM::bne(.L_8046129C);
/*804613FC 0045E1FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80461400 0045E200*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80461404 0045E204*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80461408 0045E208*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8046140C 0045E20C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80461410 0045E210*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80461414 0045E214*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80461418 0045E218*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8046141C 0045E21C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80461420 0045E220*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80461424 0045E224*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*80461428 0045E228*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8046142C 0045E22C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80461430 0045E230*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80461434 0045E234*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80461438 0045E238*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8046143C 0045E23C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80461440 0045E240*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80461444 0045E244*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80461448 0045E248*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8046144C 0045E24C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80461450 0045E250*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80461454 0045E254*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*80461458 0045E258*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8046145C 0045E25C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80461460 0045E260*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80461464 0045E264*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80461468 0045E268*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8046146C 0045E26C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80461470 0045E270*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80461474 0045E274*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80461478 0045E278*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 4);
/*8046147C 0045E27C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80461480 0045E280*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80461484 0045E284*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80461488 0045E288*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8046148C 0045E28C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80461490 0045E290*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80461494 0045E294*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80461498 0045E298*/ PPC::Runtime::ASM::blr();
}