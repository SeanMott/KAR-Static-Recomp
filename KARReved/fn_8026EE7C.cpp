//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8026DD4C.hpp"
#include "fn_8026C100.hpp"
#include "fn_80262FDC.hpp"
#include "fn_801C7648.hpp"
#include "fn_80276050.hpp"
#include "fn_8026D6A0.hpp"



void fn_8026EE7C(PPC::Runtime::GCContext* context)
{
/*8026EE7C 0026BC7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8026EE80 0026BC80*/ PPC::Runtime::ASM::mflr(context->r0);
/*8026EE84 0026BC84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8026EE88 0026BC88*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8026EE8C 0026BC8C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8026EE90 0026BC90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8026EE94 0026BC94*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8026EE98 0026BC98*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8026EE9C 0026BC9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r3));
/*8026EEA0 0026BCA0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x300);
/*8026EEA4 0026BCA4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xb8);
/*8026EEA8 0026BCA8*/ PPC::Runtime::ASM::bl(fn_803D22CC);
/*8026EEAC 0026BCAC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3074 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EEB0 0026BCB0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EEB4 0026BCB4*/ PPC::Runtime::ASM::ble(.L_8026EEC4);
/*8026EEB8 0026BCB8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026EEBC 0026BCBC*/ PPC::Runtime::ASM::bl(fn_8026DD4C);
/*8026EEC0 0026BCC0*/ PPC::Runtime::ASM::b(.L_8026EFEC);
RUNTIME_PPC_JUMP_LABEL(.L_8026EEC4, 0x8026EEC4) //this is a jump label
/*8026EEC4 0026BCC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*8026EEC8 0026BCC8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026EECC 0026BCCC*/ PPC::Runtime::ASM::beq(.L_8026EEF0);
/*8026EED0 0026BCD0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8026EED4 0026BCD4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r5));
/*8026EED8 0026BCD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r5));
/*8026EEDC 0026BCDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r5));
/*8026EEE0 0026BCE0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026EEE4 0026BCE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026EEE8 0026BCE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8026EEEC 0026BCEC*/ PPC::Runtime::ASM::b(.L_8026EF08);
RUNTIME_PPC_JUMP_LABEL(.L_8026EEF0, 0x8026EEF0) //this is a jump label
/*8026EEF0 0026BCF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*8026EEF4 0026BCF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*8026EEF8 0026BCF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*8026EEFC 0026BCFC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026EF00 0026BD00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026EF04 0026BD04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026EF08, 0x8026EF08) //this is a jump label
/*8026EF08 0026BD08*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026EF0C 0026BD0C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026EF10 0026BD10*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026EF14 0026BD14*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8026EF18 0026BD18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8026EF1C 0026BD1C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8026EF20 0026BD20*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026EF24 0026BD24*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8026EF28 0026BD28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026EF2C 0026BD2C*/ PPC::Runtime::ASM::bl(fn_8026C100);
/*8026EF30 0026BD30*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8026EF34 0026BD34*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8026EF38 0026BD38*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026EF3C 0026BD3C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8026EF40 0026BD40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026EF44 0026BD44*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026EF48 0026BD48*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8026EF4C 0026BD4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8026EF50 0026BD50*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026EF54 0026BD54*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8026EF58 0026BD58*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*8026EF5C 0026BD5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3138 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EF60 0026BD60*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*8026EF64 0026BD64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EF68 0026BD68*/ PPC::Runtime::ASM::ble(.L_8026EFE0);
/*8026EF6C 0026BD6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*8026EF70 0026BD70*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026EF74 0026BD74*/ PPC::Runtime::ASM::beq(.L_8026EF84);
/*8026EF78 0026BD78*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8026EF7C 0026BD7C*/ PPC::Runtime::ASM::bl(fn_801C7648);
/*8026EF80 0026BD80*/ PPC::Runtime::ASM::b(.L_8026EF9C);
RUNTIME_PPC_JUMP_LABEL(.L_8026EF84, 0x8026EF84) //this is a jump label
/*8026EF84 0026BD84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*8026EF88 0026BD88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r30));
/*8026EF8C 0026BD8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8026EF90 0026BD90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8026EF94 0026BD94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r30));
/*8026EF98 0026BD98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026EF9C, 0x8026EF9C) //this is a jump label
/*8026EF9C 0026BD9C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8026EFA0 0026BDA0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8026EFA4 0026BDA4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8026EFA8 0026BDA8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EFAC 0026BDAC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8026EFB0 0026BDB0*/ PPC::Runtime::ASM::ble(.L_8026EFE0);
/*8026EFB4 0026BDB4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x300);
/*8026EFB8 0026BDB8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xb8);
/*8026EFBC 0026BDBC*/ PPC::Runtime::ASM::bl(fn_803D22F4);
/*8026EFC0 0026BDC0*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f31);
/*8026EFC4 0026BDC4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3004 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EFC8 0026BDC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EFCC 0026BDCC*/ PPC::Runtime::ASM::bge(.L_8026EFE0);
/*8026EFD0 0026BDD0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026EFD4 0026BDD4*/ PPC::Runtime::ASM::li(context->r4, 0x96);
/*8026EFD8 0026BDD8*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*8026EFDC 0026BDDC*/ PPC::Runtime::ASM::bl(fn_80276050);
RUNTIME_PPC_JUMP_LABEL(.L_8026EFE0, 0x8026EFE0) //this is a jump label
/*8026EFE0 0026BDE0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026EFE4 0026BDE4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8026EFE8 0026BDE8*/ PPC::Runtime::ASM::bl(fn_8026D6A0);
RUNTIME_PPC_JUMP_LABEL(.L_8026EFEC, 0x8026EFEC) //this is a jump label
/*8026EFEC 0026BDEC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8026EFF0 0026BDF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8026EFF4 0026BDF4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8026EFF8 0026BDF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8026EFFC 0026BDFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8026F000 0026BE00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8026F004 0026BE04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*8026F008 0026BE08*/ PPC::Runtime::ASM::blr();
}