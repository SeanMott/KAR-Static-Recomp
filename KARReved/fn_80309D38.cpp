//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"
#include "fn_802E498C.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80379784.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802E26DC.hpp"



void fn_80309D38(PPC::Runtime::GCContext* context)
{
/*80309D38 00306B38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80309D3C 00306B3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80309D40 00306B40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80309D44 00306B44*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80309D48 00306B48*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80309D4C 00306B4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80309D50 00306B50*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80309D54 00306B54*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80309D58 00306B58*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80309D5C 00306B5C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80309D60 00306B60*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80309D64 00306B64*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80309D68 00306B68*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80309D6C 00306B6C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80309D70 00306B70*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x70);
/*80309D74 00306B74*/ PPC::Runtime::ASM::bl(fn_802E498C);
/*80309D78 00306B78*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*80309D7C 00306B7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80309D80 00306B80*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80309D84 00306B84*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x32);
/*80309D88 00306B88*/ PPC::Runtime::ASM::bge(.L_80309DD0);
/*80309D8C 00306B8C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80309D90 00306B90*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80309D94 00306B94*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80309D98 00306B98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80309D9C 00306B9C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*80309DA0 00306BA0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80309DA4 00306BA4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3CC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80309DA8 00306BA8*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3D60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80309DAC 00306BAC*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80309DB0 00306BB0*/ PPC::Runtime::ASM::fsubs(context->f3, context->f0, context->f4);
/*80309DB4 00306BB4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3D54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80309DB8 00306BB8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80309DBC 00306BBC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f3);
/*80309DC0 00306BC0*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80309DC4 00306BC4*/ PPC::Runtime::ASM::fadds(context->f0, context->f4, context->f0);
/*80309DC8 00306BC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r31));
/*80309DCC 00306BCC*/ PPC::Runtime::ASM::b(.L_80309E64);
RUNTIME_PPC_JUMP_LABEL(.L_80309DD0, 0x80309DD0) //this is a jump label
/*80309DD0 00306BD0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x32);
/*80309DD4 00306BD4*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*80309DD8 00306BD8*/ PPC::Runtime::ASM::bne(.L_80309DF4);
/*80309DDC 00306BDC*/ PPC::Runtime::ASM::lis(context->r4, 0x7);
/*80309DE0 00306BE0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x390);
/*80309DE4 00306BE4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x6);
/*80309DE8 00306BE8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80309DEC 00306BEC*/ PPC::Runtime::ASM::bl(fn_80379784);
/*80309DF0 00306BF0*/ PPC::Runtime::ASM::b(.L_80309E64);
RUNTIME_PPC_JUMP_LABEL(.L_80309DF4, 0x80309DF4) //this is a jump label
/*80309DF4 00306BF4*/ PPC::Runtime::ASM::ble(.L_80309E54);
/*80309DF8 00306BF8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80309DFC 00306BFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80309E00 00306C00*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E3D60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80309E04 00306C04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80309E08 00306C08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3D54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80309E0C 00306C0C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80309E10 00306C10*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80309E14 00306C14*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80309E18 00306C18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80309E1C 00306C1C*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80309E20 00306C20*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80309E24 00306C24*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*80309E28 00306C28*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80309E2C 00306C2C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f1);
/*80309E30 00306C30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r31));
/*80309E34 00306C34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80309E38 00306C38*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80309E3C 00306C3C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*80309E40 00306C40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80309E44 00306C44*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r31));
/*80309E48 00306C48*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f1, context->f0, context->f2);
/*80309E4C 00306C4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r31));
/*80309E50 00306C50*/ PPC::Runtime::ASM::b(.L_80309E64);
RUNTIME_PPC_JUMP_LABEL(.L_80309E54, 0x80309E54) //this is a jump label
/*80309E54 00306C54*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80309E58 00306C58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*80309E5C 00306C5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80309E60 00306C60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80309E64, 0x80309E64) //this is a jump label
/*80309E64 00306C64*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80309E68 00306C68*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80309E6C 00306C6C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80309E70 00306C70*/ PPC::Runtime::ASM::bl(fn_802E26DC);
/*80309E74 00306C74*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80309E78 00306C78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80309E7C 00306C7C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80309E80 00306C80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80309E84 00306C84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80309E88 00306C88*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80309E8C 00306C8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80309E90 00306C90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80309E94 00306C94*/ PPC::Runtime::ASM::blr();
}