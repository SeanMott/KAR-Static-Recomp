//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D8190.hpp"
#include "fn_801D8298.hpp"
#include "fn_801D87F8.hpp"
#include "fn_801EBF84.hpp"
#include "fn_80064C18.hpp"
#include "fn_801EBF84.hpp"
#include "fn_801D89E8.hpp"



void fn_801EBC90(PPC::Runtime::GCContext* context)
{
/*801EBC90 001E8A90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*801EBC94 001E8A94*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EBC98 001E8A98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801EBC9C 001E8A9C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801EBCA0 001E8AA0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801EBCA4 001E8AA4*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801EBCA8 001E8AA8*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*801EBCAC 001E8AAC*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801EBCB0 001E8AB0*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801EBCB4 001E8AB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801EBCB8 001E8AB8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EBCBC 001E8ABC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x43c);
/*801EBCC0 001E8AC0*/ PPC::Runtime::ASM::bl(fn_801D8190);
/*801EBCC4 001E8AC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r31));
/*801EBCC8 001E8AC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EBCCC 001E8ACC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x454);
/*801EBCD0 001E8AD0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801EBCD4 001E8AD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801EBCD8 001E8AD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r31));
/*801EBCDC 001E8ADC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801EBCE0 001E8AE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EBCE4 001E8AE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r31));
/*801EBCE8 001E8AE8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801EBCEC 001E8AEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801EBCF0 001E8AF0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6ec, context->r31));
/*801EBCF4 001E8AF4*/ PPC::Runtime::ASM::bl(fn_801D8298);
/*801EBCF8 001E8AF8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EBCFC 001E8AFC*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801EBD00 001E8B00*/ PPC::Runtime::ASM::beq(.L_801EBD34);
/*801EBD04 001E8B04*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r31));
/*801EBD08 001E8B08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801EBD0C 001E8B0C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EBD10 001E8B10*/ PPC::Runtime::ASM::fmadds(context->f3, context->f3, context->f1, context->f0);
/*801EBD14 001E8B14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801EBD18 001E8B18*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801EBD1C 001E8B1C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x458, context->r31));
/*801EBD20 001E8B20*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f1, context->f2);
/*801EBD24 001E8B24*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EBD28 001E8B28*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45c, context->r31));
/*801EBD2C 001E8B2C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*801EBD30 001E8B30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801EBD34, 0x801EBD34) //this is a jump label
/*801EBD34 001E8B34*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f0, context->r31));
/*801EBD38 001E8B38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EBD3C 001E8B3C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x448);
/*801EBD40 001E8B40*/ PPC::Runtime::ASM::bl(fn_801D87F8);
/*801EBD44 001E8B44*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EBD48 001E8B48*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801EBD4C 001E8B4C*/ PPC::Runtime::ASM::beq(.L_801EBD80);
/*801EBD50 001E8B50*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x448, context->r31));
/*801EBD54 001E8B54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801EBD58 001E8B58*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EBD5C 001E8B5C*/ PPC::Runtime::ASM::fmadds(context->f3, context->f3, context->f1, context->f0);
/*801EBD60 001E8B60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801EBD64 001E8B64*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801EBD68 001E8B68*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44c, context->r31));
/*801EBD6C 001E8B6C*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f1, context->f2);
/*801EBD70 001E8B70*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EBD74 001E8B74*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x450, context->r31));
/*801EBD78 001E8B78*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*801EBD7C 001E8B7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801EBD80, 0x801EBD80) //this is a jump label
/*801EBD80 001E8B80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EBD84 001E8B84*/ PPC::Runtime::ASM::bl(fn_801EBF84);
/*801EBD88 001E8B88*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x774);
/*801EBD8C 001E8B8C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*801EBD90 001E8B90*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*801EBD94 001E8B94*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801EBD98 001E8B98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EBD9C 001E8B9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801EBDA0 001E8BA0*/ PPC::Runtime::ASM::ble(.L_801EBE04);
/*801EBDA4 001E8BA4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801EBDA8 001E8BA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EBDAC 001E8BAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801EBDB0 001E8BB0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EBDB4 001E8BB4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EBDB8 001E8BB8*/ PPC::Runtime::ASM::fsubs(context->f31, context->f1, context->f0);
/*801EBDBC 001E8BBC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801EBDC0 001E8BC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801EBDC4 001E8BC4*/ PPC::Runtime::ASM::fsubs(context->f30, context->f3, context->f2);
/*801EBDC8 001E8BC8*/ PPC::Runtime::ASM::fsubs(context->f29, context->f1, context->f0);
/*801EBDCC 001E8BCC*/ PPC::Runtime::ASM::bl(fn_801EBF84);
/*801EBDD0 001E8BD0*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f1);
/*801EBDD4 001E8BD4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801EBDD8 001E8BD8*/ PPC::Runtime::ASM::fmuls(context->f30, context->f30, context->f1);
/*801EBDDC 001E8BDC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EBDE0 001E8BE0*/ PPC::Runtime::ASM::fmuls(context->f29, context->f29, context->f1);
/*801EBDE4 001E8BE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801EBDE8 001E8BE8*/ PPC::Runtime::ASM::fadds(context->f3, context->f3, context->f31);
/*801EBDEC 001E8BEC*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f30);
/*801EBDF0 001E8BF0*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f29);
/*801EBDF4 001E8BF4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EBDF8 001E8BF8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801EBDFC 001E8BFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801EBE00 001E8C00*/ PPC::Runtime::ASM::b(.L_801EBE1C);
RUNTIME_PPC_JUMP_LABEL(.L_801EBE04, 0x801EBE04) //this is a jump label
/*801EBE04 001E8C04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801EBE08 001E8C08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EBE0C 001E8C0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801EBE10 001E8C10*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EBE14 001E8C14*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801EBE18 001E8C18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801EBE1C, 0x801EBE1C) //this is a jump label
/*801EBE1C 001E8C1C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801EBE20 001E8C20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EBE24 001E8C24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EBE28 001E8C28*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801EBE2C 001E8C2C*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*801EBE30 001E8C30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801EBE34 001E8C34*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801EBE38 001E8C38*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801EBE3C 001E8C3C*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*801EBE40 001E8C40*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801EBE44 001E8C44*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801EBE48 001E8C48*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801EBE4C 001E8C4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801EBE50 001E8C50*/ PPC::Runtime::ASM::bl(fn_801D89E8);
/*801EBE54 001E8C54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x840, context->r31));
/*801EBE58 001E8C58*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801EBE5C 001E8C5C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801EBE60 001E8C60*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801EBE64 001E8C64*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*801EBE68 001E8C68*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801EBE6C 001E8C6C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801EBE70 001E8C70*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801EBE74 001E8C74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801EBE78 001E8C78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801EBE7C 001E8C7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EBE80 001E8C80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*801EBE84 001E8C84*/ PPC::Runtime::ASM::blr();
}