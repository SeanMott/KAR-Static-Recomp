//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80192298.hpp"
#include "fn_80191FDC.hpp"
#include "fn_calculatePowerUpSpawnShootAngle?.hpp"
#include "fn_80064C18.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80204938.hpp"
#include "fn_80203FCC.hpp"
#include "fn_calculatePowerUpSpawnShootAngle?.hpp"
#include "fn_80064C18.hpp"
#include "fn_80062ECC.hpp"



void fn_80223400(PPC::Runtime::GCContext* context)
{
/*80223400 00220200*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xb0, context->r1));
/*80223404 00220204*/ PPC::Runtime::ASM::mflr(context->r0);
/*80223408 00220208*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*8022340C 0022020C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*80223410 00220210*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*80223414 00220214*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80223418 00220218*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8022341C 0022021C*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80223420 00220220*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*80223424 00220224*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80223428 00220228*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8022342C 0022022C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80223430 00220230*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80223434 00220234*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80223438 00220238*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E2900 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022343C 0022023C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80223440 00220240*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*80223444 00220244*/ PPC::Runtime::ASM::b(.L_80223590);
RUNTIME_PPC_JUMP_LABEL(.L_80223448, 0x80223448) //this is a jump label
/*80223448 00220248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*8022344C 0022024C*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*80223450 00220250*/ PPC::Runtime::ASM::beq(.L_8022358C);
/*80223454 00220254*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80223458 00220258*/ PPC::Runtime::ASM::bl(fn_80192298);
/*8022345C 0022025C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80223460 00220260*/ PPC::Runtime::ASM::beq(.L_80223570);
/*80223464 00220264*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80223468 00220268*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*8022346C 0022026C*/ PPC::Runtime::ASM::bl(fn_80191FDC);
/*80223470 00220270*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80223474 00220274*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*80223478 00220278*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8022347C 0022027C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80223480 00220280*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80223484 00220284*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80223488 00220288*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8022348C 0022028C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80223490 00220290*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80223494 00220294*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80223498 00220298*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8022349C 0022029C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*802234A0 002202A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802234A4 002202A4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802234A8 002202A8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802234AC 002202AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*802234B0 002202B0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*802234B4 002202B4*/ PPC::Runtime::ASM::bge(.L_80223568);
/*802234B8 002202B8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802234BC 002202BC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*802234C0 002202C0*/ PPC::Runtime::ASM::bl(fn_calculatePowerUpSpawnShootAngle?);
/*802234C4 002202C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802234C8 002202C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802234CC 002202CC*/ PPC::Runtime::ASM::fneg(context->f8, context->f0);
/*802234D0 002202D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802234D4 002202D4*/ PPC::Runtime::ASM::fneg(context->f9, context->f1);
/*802234D8 002202D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802234DC 002202DC*/ PPC::Runtime::ASM::fneg(context->f7, context->f0);
/*802234E0 002202E0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802234E4 002202E4*/ PPC::Runtime::ASM::frsp(context->f2, context->f8);
/*802234E8 002202E8*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802234EC 002202EC*/ PPC::Runtime::ASM::frsp(context->f4, context->f9);
/*802234F0 002202F0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E28F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802234F4 002202F4*/ PPC::Runtime::ASM::frsp(context->f6, context->f7);
/*802234F8 002202F8*/ PPC::Runtime::ASM::stfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802234FC 002202FC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*80223500 00220300*/ PPC::Runtime::ASM::stfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80223504 00220304*/ PPC::Runtime::ASM::stfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80223508 00220308*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*8022350C 0022030C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f6, context->f5, context->f1);
/*80223510 00220310*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80223514 00220314*/ PPC::Runtime::ASM::bge(.L_8022351C);
/*80223518 00220318*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8022351C, 0x8022351C) //this is a jump label
/*8022351C 0022031C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80223520 00220320*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80223524 00220324*/ PPC::Runtime::ASM::bge(.L_80223568);
/*80223528 00220328*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8022352C 0022032C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*80223530 00220330*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x44);
/*80223534 00220334*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*80223538 00220338*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc);
/*8022353C 0022033C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*80223540 00220340*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*80223544 00220344*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E28FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80223548 00220348*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8022354C 0022034C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*80223550 00220350*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80223554 00220354*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80223558 00220358*/ PPC::Runtime::ASM::bne(.L_80223568);
/*8022355C 0022035C*/ PPC::Runtime::ASM::fmr(context->f29, context->f31);
/*80223560 00220360*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80223564 00220364*/ PPC::Runtime::ASM::b(.L_80223574);
RUNTIME_PPC_JUMP_LABEL(.L_80223568, 0x80223568) //this is a jump label
/*80223568 00220368*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8022356C 0022036C*/ PPC::Runtime::ASM::b(.L_80223574);
RUNTIME_PPC_JUMP_LABEL(.L_80223570, 0x80223570) //this is a jump label
/*80223570 00220370*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80223574, 0x80223574) //this is a jump label
/*80223574 00220374*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80223578 00220378*/ PPC::Runtime::ASM::beq(.L_8022358C);
/*8022357C 0022037C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f30);
/*80223580 00220380*/ PPC::Runtime::ASM::bge(.L_8022358C);
/*80223584 00220384*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*80223588 00220388*/ PPC::Runtime::ASM::fmr(context->f30, context->f29);
RUNTIME_PPC_JUMP_LABEL(.L_8022358C, 0x8022358C) //this is a jump label
/*8022358C 0022038C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80223590, 0x80223590) //this is a jump label
/*80223590 00220390*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80223594 00220394*/ PPC::Runtime::ASM::bne(.L_80223448);
/*80223598 00220398*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022359C 0022039C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*802235A0 002203A0*/ PPC::Runtime::ASM::b(.L_802236E0);
RUNTIME_PPC_JUMP_LABEL(.L_802235A4, 0x802235A4) //this is a jump label
/*802235A4 002203A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802235A8 002203A8*/ PPC::Runtime::ASM::bl(fn_80204938);
/*802235AC 002203AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802235B0 002203B0*/ PPC::Runtime::ASM::beq(.L_802236C0);
/*802235B4 002203B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802235B8 002203B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x50);
/*802235BC 002203BC*/ PPC::Runtime::ASM::bl(fn_80203FCC);
/*802235C0 002203C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802235C4 002203C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802235C8 002203C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802235CC 002203CC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802235D0 002203D0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*802235D4 002203D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802235D8 002203D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802235DC 002203DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802235E0 002203E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802235E4 002203E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802235E8 002203E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802235EC 002203EC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*802235F0 002203F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802235F4 002203F4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802235F8 002203F8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802235FC 002203FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80223600 00220400*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80223604 00220404*/ PPC::Runtime::ASM::bge(.L_802236B8);
/*80223608 00220408*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8022360C 0022040C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80223610 00220410*/ PPC::Runtime::ASM::bl(fn_calculatePowerUpSpawnShootAngle?);
/*80223614 00220414*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80223618 00220418*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022361C 0022041C*/ PPC::Runtime::ASM::fneg(context->f8, context->f0);
/*80223620 00220420*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80223624 00220424*/ PPC::Runtime::ASM::fneg(context->f9, context->f1);
/*80223628 00220428*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022362C 0022042C*/ PPC::Runtime::ASM::fneg(context->f7, context->f0);
/*80223630 00220430*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80223634 00220434*/ PPC::Runtime::ASM::frsp(context->f2, context->f8);
/*80223638 00220438*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8022363C 0022043C*/ PPC::Runtime::ASM::frsp(context->f4, context->f9);
/*80223640 00220440*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E28F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80223644 00220444*/ PPC::Runtime::ASM::frsp(context->f6, context->f7);
/*80223648 00220448*/ PPC::Runtime::ASM::stfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022364C 0022044C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*80223650 00220450*/ PPC::Runtime::ASM::stfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80223654 00220454*/ PPC::Runtime::ASM::stfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80223658 00220458*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*8022365C 0022045C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f6, context->f5, context->f1);
/*80223660 00220460*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80223664 00220464*/ PPC::Runtime::ASM::bge(.L_8022366C);
/*80223668 00220468*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8022366C, 0x8022366C) //this is a jump label
/*8022366C 0022046C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80223670 00220470*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80223674 00220474*/ PPC::Runtime::ASM::bge(.L_802236B8);
/*80223678 00220478*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8022367C 0022047C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80223680 00220480*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*80223684 00220484*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*80223688 00220488*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc);
/*8022368C 0022048C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80223690 00220490*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*80223694 00220494*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E28FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80223698 00220498*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8022369C 0022049C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*802236A0 002204A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802236A4 002204A4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802236A8 002204A8*/ PPC::Runtime::ASM::bne(.L_802236B8);
/*802236AC 002204AC*/ PPC::Runtime::ASM::fmr(context->f29, context->f31);
/*802236B0 002204B0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802236B4 002204B4*/ PPC::Runtime::ASM::b(.L_802236C4);
RUNTIME_PPC_JUMP_LABEL(.L_802236B8, 0x802236B8) //this is a jump label
/*802236B8 002204B8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802236BC 002204BC*/ PPC::Runtime::ASM::b(.L_802236C4);
RUNTIME_PPC_JUMP_LABEL(.L_802236C0, 0x802236C0) //this is a jump label
/*802236C0 002204C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802236C4, 0x802236C4) //this is a jump label
/*802236C4 002204C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802236C8 002204C8*/ PPC::Runtime::ASM::beq(.L_802236DC);
/*802236CC 002204CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f30);
/*802236D0 002204D0*/ PPC::Runtime::ASM::bge(.L_802236DC);
/*802236D4 002204D4*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*802236D8 002204D8*/ PPC::Runtime::ASM::fmr(context->f30, context->f29);
RUNTIME_PPC_JUMP_LABEL(.L_802236DC, 0x802236DC) //this is a jump label
/*802236DC 002204DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802236E0, 0x802236E0) //this is a jump label
/*802236E0 002204E0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802236E4 002204E4*/ PPC::Runtime::ASM::bne(.L_802235A4);
/*802236E8 002204E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802236EC 002204EC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*802236F0 002204F0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802236F4 002204F4*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*802236F8 002204F8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802236FC 002204FC*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*80223700 00220500*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80223704 00220504*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80223708 00220508*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8022370C 0022050C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*80223710 00220510*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80223714 00220514*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80223718 00220518*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xb0);
/*8022371C 0022051C*/ PPC::Runtime::ASM::blr();
}