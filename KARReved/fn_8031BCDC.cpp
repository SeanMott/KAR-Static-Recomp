//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8031C3E0.hpp"



void fn_8031BCDC(PPC::Runtime::GCContext* context)
{
/*8031BCDC 00318ADC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8031BCE0 00318AE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8031BCE4 00318AE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8031BCE8 00318AE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8031BCEC 00318AEC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8031BCF0 00318AF0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8031BCF4 00318AF4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031BCF8 00318AF8*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8031BCFC 00318AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8031BD00 00318B00*/ PPC::Runtime::ASM::cmplw(context->r29, context->r0);
/*8031BD04 00318B04*/ PPC::Runtime::ASM::ble(.L_8031BE60);
/*8031BD08 00318B08*/ PPC::Runtime::ASM::lis(context->r3, 0x800);
/*8031BD0C 00318B0C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8031BD10 00318B10*/ PPC::Runtime::ASM::cmplw(context->r29, context->r0);
/*8031BD14 00318B14*/ PPC::Runtime::ASM::ble(.L_8031BD38);
/*8031BD18 00318B18*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*8031BD1C 00318B1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E0B58 @ Get_MemoryOffset_HighBit);
/*8031BD20 00318B20*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*8031BD24 00318B24*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804E0B58 @ Get_MemoryOffset_LowBit);
/*8031BD28 00318B28*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*8031BD2C 00318B2C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8031BD30 00318B30*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*8031BD34 00318B34*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_8031BD38, 0x8031BD38) //this is a jump label
/*8031BD38 00318B38*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8031BD3C 00318B3C*/ PPC::Runtime::ASM::slwi(context->r3, context->r29, 5);
/*8031BD40 00318B40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8031BD44 00318B44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8031BD48 00318B48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8031BD4C 00318B4C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8031BD50 00318B50  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8031BD54 00318B54*/ PPC::Runtime::ASM::bne(.L_8031BD78);
/*8031BD58 00318B58*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*8031BD5C 00318B5C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E0B3C @ Get_MemoryOffset_HighBit);
/*8031BD60 00318B60*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*8031BD64 00318B64*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804E0B3C @ Get_MemoryOffset_LowBit);
/*8031BD68 00318B68*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*8031BD6C 00318B6C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8031BD70 00318B70*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*8031BD74 00318B74*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_8031BD78, 0x8031BD78) //this is a jump label
/*8031BD78 00318B78*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8031BD7C 00318B7C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8031BD80 00318B80*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8031BD84 00318B84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8031BD88 00318B88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8031BD8C 00318B8C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 5);
/*8031BD90 00318B90*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*8031BD94 00318B94*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1f);
/*8031BD98 00318B98*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8031BD9C 00318B9C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*8031BDA0 00318BA0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8031BDA4 00318BA4*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*8031BDA8 00318BA8*/ PPC::Runtime::ASM::bge(.L_8031BE0C);
RUNTIME_PPC_JUMP_LABEL(.L_8031BDAC, 0x8031BDAC) //this is a jump label
/*8031BDAC 00318BAC*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8031BDB0 00318BB0*/ PPC::Runtime::ASM::beq(.L_8031BDF4);
/*8031BDB4 00318BB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8031BDB8 00318BB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8031BDBC 00318BBC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8031BDC0 00318BC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8031BDC4 00318BC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8031BDC8 00318BC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8031BDCC 00318BCC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8031BDD0 00318BD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8031BDD4 00318BD4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8031BDD8 00318BD8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*8031BDDC 00318BDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8031BDE0 00318BE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8031BDE4 00318BE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8031BDE8 00318BE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*8031BDEC 00318BEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8031BDF0 00318BF0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8031BDF4, 0x8031BDF4) //this is a jump label
/*8031BDF4 00318BF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8031BDF8 00318BF8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*8031BDFC 00318BFC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x20);
/*8031BE00 00318C00*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8031BE04 00318C04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8031BE08 00318C08*/ PPC::Runtime::ASM::bdnz(.L_8031BDAC);
RUNTIME_PPC_JUMP_LABEL(.L_8031BE0C, 0x8031BE0C) //this is a jump label
/*8031BE0C 00318C0C*/ PPC::Runtime::ASM::addi(context->r0, context->r1, 0x8);
/*8031BE10 00318C10*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*8031BE14 00318C14*/ PPC::Runtime::ASM::beq(.L_8031BE48);
/*8031BE18 00318C18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8031BE1C 00318C1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8031BE20 00318C20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8031BE24 00318C24*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8031BE28 00318C28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8031BE2C 00318C2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8031BE30 00318C30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8031BE34 00318C34*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8031BE38 00318C38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8031BE3C 00318C3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8031BE40 00318C40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8031BE44 00318C44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8031BE48, 0x8031BE48) //this is a jump label
/*8031BE48 00318C48*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8031BE4C 00318C4C*/ PPC::Runtime::ASM::bl(fn_8031C3E0);
/*8031BE50 00318C50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8031BE54 00318C54*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8031BE58 00318C58*/ PPC::Runtime::ASM::beq(.L_8031BE60);
/*8031BE5C 00318C5C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8031BE60, 0x8031BE60) //this is a jump label
/*8031BE60 00318C60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8031BE64 00318C64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8031BE68 00318C68*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8031BE6C 00318C6C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031BE70 00318C70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8031BE74 00318C74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8031BE78 00318C78*/ PPC::Runtime::ASM::blr();
}