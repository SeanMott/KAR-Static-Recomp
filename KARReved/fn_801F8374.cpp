//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CDDB0.hpp"
#include "fn_800D1CA8.hpp"
#include "fn_800D1838.hpp"
#include "fn_800D1860.hpp"



void fn_801F8374(PPC::Runtime::GCContext* context)
{
/*801F8374 001F5174*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*801F8378 001F5178*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F837C 001F517C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801F8380 001F5180*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801F8384 001F5184*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801F8388 001F5188*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801F838C 001F518C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801F8390 001F5190*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801F8394 001F5194*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801F8398 001F5198*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*801F839C 001F519C*/ PPC::Runtime::ASM::bl(fn_801CDDB0);
/*801F83A0 001F51A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x700, context->r30));
/*801F83A4 001F51A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*801F83A8 001F51A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801F83AC 001F51AC*/ PPC::Runtime::ASM::beq(.L_801F83C4);
/*801F83B0 001F51B0*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_2 @ Get_MemoryOffset_HighBit);
/*801F83B4 001F51B4*/ PPC::Runtime::ASM::li(context->r3, String_ "mplib." 5 @ Get_MemoryOffset_SDA21);
/*801F83B8 001F51B8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_2 @ Get_MemoryOffset_LowBit);
/*801F83BC 001F51BC*/ PPC::Runtime::ASM::li(context->r4, 0x1f9);
/*801F83C0 001F51C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F83C4, 0x801F83C4) //this is a jump label
/*801F83C4 001F51C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*801F83C8 001F51C8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801F83CC 001F51CC*/ PPC::Runtime::ASM::beq(.L_801F83E8);
/*801F83D0 001F51D0*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_3 @ Get_MemoryOffset_HighBit);
/*801F83D4 001F51D4*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_2 @ Get_MemoryOffset_HighBit);
/*801F83D8 001F51D8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_3 @ Get_MemoryOffset_LowBit);
/*801F83DC 001F51DC*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*801F83E0 001F51E0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_2 @ Get_MemoryOffset_LowBit);
/*801F83E4 001F51E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F83E8, 0x801F83E8) //this is a jump label
/*801F83E8 001F51E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r31));
/*801F83EC 001F51EC*/ PPC::Runtime::ASM::fneg(context->f5, context->f31);
/*801F83F0 001F51F0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x424, context->r30));
/*801F83F4 001F51F4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*801F83F8 001F51F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*801F83FC 001F51FC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*801F8400 001F5200*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801F8404 001F5204*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801F8408 001F5208*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*801F840C 001F520C*/ PPC::Runtime::ASM::fmadds(context->f4, context->f3, context->f1, context->f0);
/*801F8410 001F5210*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801F8414 001F5214*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x20);
/*801F8418 001F5218*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801F841C 001F521C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x428, context->r30));
/*801F8420 001F5220*/ PPC::Runtime::ASM::fmadds(context->f3, context->f3, context->f1, context->f2);
/*801F8424 001F5224*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801F8428 001F5228*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42c, context->r30));
/*801F842C 001F522C*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f1, context->f0);
/*801F8430 001F5230*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801F8434 001F5234*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x738, context->r30));
/*801F8438 001F5238*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f5, context->f4);
/*801F843C 001F523C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801F8440 001F5240*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x73c, context->r30));
/*801F8444 001F5244*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f5, context->f3);
/*801F8448 001F5248*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801F844C 001F524C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x740, context->r30));
/*801F8450 001F5250*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f5, context->f2);
/*801F8454 001F5254*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801F8458 001F5258*/ PPC::Runtime::ASM::bl(fn_800D1CA8);
/*801F845C 001F525C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F8460 001F5260*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*801F8464 001F5264*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F8468 001F5268*/ PPC::Runtime::ASM::bne(.L_801F84F4);
/*801F846C 001F526C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801F8470 001F5270*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801F8474 001F5274*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F8478 001F5278*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801F847C 001F527C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F8480 001F5280*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*801F8484 001F5284*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801F8488 001F5288*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801F848C 001F528C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*801F8490 001F5290*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8494 001F5294*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801F8498 001F5298*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F849C 001F529C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F84A0 001F52A0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801F84A4 001F52A4*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*801F84A8 001F52A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E20E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F84AC 001F52AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F84B0 001F52B0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801F84B4 001F52B4*/ PPC::Runtime::ASM::fsubs(context->f31, context->f1, context->f0);
/*801F84B8 001F52B8*/ PPC::Runtime::ASM::bl(fn_800D1860);
/*801F84BC 001F52BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801F84C0 001F52C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801F84C4 001F52C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r30));
/*801F84C8 001F52C8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f31, context->f0);
/*801F84CC 001F52CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r30));
/*801F84D0 001F52D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F84D4 001F52D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*801F84D8 001F52D8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f31, context->f0);
/*801F84DC 001F52DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*801F84E0 001F52E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F84E4 001F52E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r30));
/*801F84E8 001F52E8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f31, context->f0);
/*801F84EC 001F52EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r30));
/*801F84F0 001F52F0*/ PPC::Runtime::ASM::b(.L_801F84F8);
RUNTIME_PPC_JUMP_LABEL(.L_801F84F4, 0x801F84F4) //this is a jump label
/*801F84F4 001F52F4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801F84F8, 0x801F84F8) //this is a jump label
/*801F84F8 001F52F8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801F84FC 001F52FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801F8500 001F5300*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801F8504 001F5304*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801F8508 001F5308*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801F850C 001F530C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F8510 001F5310*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*801F8514 001F5314*/ PPC::Runtime::ASM::blr();
}