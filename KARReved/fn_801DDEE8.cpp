//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80009208.hpp"
#include "fn_8000A0F8.hpp"
#include "fn_8000AF38.hpp"
#include "fn_8000AF38.hpp"
#include "fn_8000AF38.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022C910.hpp"
#include "fn_grGetVehicleposNum.hpp"
#include "fn_grGetVehicleAreaposNum.hpp"



void fn_801DDEE8(PPC::Runtime::GCContext* context)
{
/*801DDEE8 001DACE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*801DDEEC 001DACEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DDEF0 001DACF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801DDEF4 001DACF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*801DDEF8 001DACF8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*801DDEFC 001DACFC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*801DDF00 001DAD00*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801DDF04 001DAD04*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801DDF08 001DAD08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801DDF0C 001DAD0C*/ PPC::Runtime::ASM::bl(fn_80009208);
/*801DDF10 001DAD10*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801DDF14 001DAD14*/ PPC::Runtime::ASM::extsb(context->r30, context->r3);
/*801DDF18 001DAD18*/ PPC::Runtime::ASM::bl(fn_8000A0F8);
/*801DDF1C 001DAD1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801DDF20 001DAD20*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801DDF24 001DAD24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801DDF28 001DAD28*/ PPC::Runtime::ASM::bl(fn_8000AF38);
/*801DDF2C 001DAD2C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*801DDF30 001DAD30*/ PPC::Runtime::ASM::bne(.L_801DE0F8);
/*801DDF34 001DAD34*/ PPC::Runtime::ASM::lwz(context->r3, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DDF38 001DAD38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*801DDF3C 001DAD3C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801DDF40 001DAD40*/ PPC::Runtime::ASM::bl(fn_8000AF38);
/*801DDF44 001DAD44*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801DDF48 001DAD48*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*801DDF4C 001DAD4C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801DDF50 001DAD50*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*801DDF54 001DAD54*/ PPC::Runtime::ASM::lfd(context->f5, STRUCT_DOUBLE_COUNT_1805E1C60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DDF58 001DAD58*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*801DDF5C 001DAD5C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DDF60, 0x801DDF60) //this is a jump label
/*801DDF60 001DAD60*/ PPC::Runtime::ASM::xoris(context->r0, context->r29, 0x8000);
/*801DDF64 001DAD64*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DDF68 001DAD68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801DDF6C 001DAD6C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x5);
/*801DDF70 001DAD70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DDF74 001DAD74*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*801DDF78 001DAD78*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DDF7C 001DAD7C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801DDF80 001DAD80*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f5);
/*801DDF84 001DAD84*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*801DDF88 001DAD88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801DDF8C 001DAD8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*801DDF90 001DAD90*/ PPC::Runtime::ASM::fadds(context->f4, context->f4, context->f0);
/*801DDF94 001DAD94*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*801DDF98 001DAD98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801DDF9C 001DAD9C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x14);
/*801DDFA0 001DADA0*/ PPC::Runtime::ASM::fctiwz(context->f4, context->f4);
/*801DDFA4 001DADA4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801DDFA8 001DADA8*/ PPC::Runtime::ASM::stfd(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801DDFAC 001DADAC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DDFB0 001DADB0*/ PPC::Runtime::ASM::xoris(context->r0, context->r29, 0x8000);
/*801DDFB4 001DADB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801DDFB8 001DADB8*/ PPC::Runtime::ASM::lfd(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801DDFBC 001DADBC*/ PPC::Runtime::ASM::fsubs(context->f4, context->f4, context->f5);
/*801DDFC0 001DADC0*/ PPC::Runtime::ASM::fadds(context->f3, context->f4, context->f3);
/*801DDFC4 001DADC4*/ PPC::Runtime::ASM::fctiwz(context->f3, context->f3);
/*801DDFC8 001DADC8*/ PPC::Runtime::ASM::stfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801DDFCC 001DADCC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DDFD0 001DADD0*/ PPC::Runtime::ASM::xoris(context->r0, context->r29, 0x8000);
/*801DDFD4 001DADD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801DDFD8 001DADD8*/ PPC::Runtime::ASM::lfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801DDFDC 001DADDC*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f5);
/*801DDFE0 001DADE0*/ PPC::Runtime::ASM::fadds(context->f2, context->f3, context->f2);
/*801DDFE4 001DADE4*/ PPC::Runtime::ASM::fctiwz(context->f2, context->f2);
/*801DDFE8 001DADE8*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801DDFEC 001DADEC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801DDFF0 001DADF0*/ PPC::Runtime::ASM::xoris(context->r0, context->r29, 0x8000);
/*801DDFF4 001DADF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801DDFF8 001DADF8*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801DDFFC 001DADFC*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f5);
/*801DE000 001DAE00*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*801DE004 001DAE04*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*801DE008 001DAE08*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801DE00C 001DAE0C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801DE010 001DAE10*/ PPC::Runtime::ASM::xoris(context->r0, context->r29, 0x8000);
/*801DE014 001DAE14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801DE018 001DAE18*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801DE01C 001DAE1C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f5);
/*801DE020 001DAE20*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801DE024 001DAE24*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*801DE028 001DAE28*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801DE02C 001DAE2C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801DE030 001DAE30*/ PPC::Runtime::ASM::bdnz(.L_801DDF60);
/*801DE034 001DAE34*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 2);
/*801DE038 001DAE38*/ PPC::Runtime::ASM::subfic(context->r0, context->r4, 0xb);
/*801DE03C 001DAE3C*/ PPC::Runtime::ASM::add(context->r5, context->r28, context->r3);
/*801DE040 001DAE40*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E1C60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DE044 001DAE44*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*801DE048 001DAE48*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801DE04C 001DAE4C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0xb);
/*801DE050 001DAE50*/ PPC::Runtime::ASM::bge(.L_801DE084);
RUNTIME_PPC_JUMP_LABEL(.L_801DE054, 0x801DE054) //this is a jump label
/*801DE054 001DAE54*/ PPC::Runtime::ASM::xoris(context->r0, context->r29, 0x8000);
/*801DE058 001DAE58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801DE05C 001DAE5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801DE060 001DAE60*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*801DE064 001DAE64*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801DE068 001DAE68*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801DE06C 001DAE6C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*801DE070 001DAE70*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801DE074 001DAE74*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*801DE078 001DAE78*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801DE07C 001DAE7C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801DE080 001DAE80*/ PPC::Runtime::ASM::bdnz(.L_801DE054);
RUNTIME_PPC_JUMP_LABEL(.L_801DE084, 0x801DE084) //this is a jump label
/*801DE084 001DAE84*/ PPC::Runtime::ASM::lwz(context->r3, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DE088 001DAE88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*801DE08C 001DAE8C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801DE090 001DAE90*/ PPC::Runtime::ASM::bl(fn_8000AF38);
/*801DE094 001DAE94*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*801DE098 001DAE98*/ PPC::Runtime::ASM::xoris(context->r0, context->r29, 0x8000);
/*801DE09C 001DAE9C*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*801DE0A0 001DAEA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801DE0A4 001DAEA4*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*801DE0A8 001DAEA8*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E1C60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DE0AC 001DAEAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801DE0B0 001DAEB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801DE0B4 001DAEB4*/ PPC::Runtime::ASM::lfs(context->f3, CONST_FLOAT_VALUE_0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DE0B8 001DAEB8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801DE0BC 001DAEBC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801DE0C0 001DAEC0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*801DE0C4 001DAEC4*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DE0C8, 0x801DE0C8) //this is a jump label
/*801DE0C8 001DAEC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*801DE0CC 001DAECC*/ PPC::Runtime::ASM::fadds(context->f3, context->f3, context->f0);
/*801DE0D0 001DAED0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f3);
/*801DE0D4 001DAED4*/ PPC::Runtime::ASM::bge(.L_801DE0DC);
/*801DE0D8 001DAED8*/ PPC::Runtime::ASM::b(.L_801DE0EC);
RUNTIME_PPC_JUMP_LABEL(.L_801DE0DC, 0x801DE0DC) //this is a jump label
/*801DE0DC 001DAEDC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*801DE0E0 001DAEE0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*801DE0E4 001DAEE4*/ PPC::Runtime::ASM::bdnz(.L_801DE0C8);
/*801DE0E8 001DAEE8*/ PPC::Runtime::ASM::li(context->r3, 0xb);
RUNTIME_PPC_JUMP_LABEL(.L_801DE0EC, 0x801DE0EC) //this is a jump label
/*801DE0EC 001DAEEC*/ PPC::Runtime::ASM::add(context->r0, context->r30, context->r3);
/*801DE0F0 001DAEF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801DE0F4 001DAEF4*/ PPC::Runtime::ASM::b(.L_801DE108);
RUNTIME_PPC_JUMP_LABEL(.L_801DE0F8, 0x801DE0F8) //this is a jump label
/*801DE0F8 001DAEF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801DE0FC 001DAEFC*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*801DE100 001DAF00*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x12);
/*801DE104 001DAF04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801DE108, 0x801DE108) //this is a jump label
/*801DE108 001DAF08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801DE10C 001DAF0C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801DE110 001DAF10*/ PPC::Runtime::ASM::lfs(context->f0, CONST_FLOAT_VALUE_0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DE114 001DAF14*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*801DE118 001DAF18*/ PPC::Runtime::ASM::subf(context->r5, context->r30, context->r0);
/*801DE11C 001DAF1C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*801DE120 001DAF20*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801DE124 001DAF24*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801DE128 001DAF28*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801DE12C 001DAF2C*/ PPC::Runtime::ASM::srwi(context->r5, context->r6, 31);
/*801DE130 001DAF30*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r6);
/*801DE134 001DAF34*/ PPC::Runtime::ASM::srawi(context->r5, context->r5, 1);
/*801DE138 001DAF38*/ PPC::Runtime::ASM::add(context->r5, context->r30, context->r5);
/*801DE13C 001DAF3C*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*801DE140 001DAF40*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801DE144 001DAF44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801DE148 001DAF48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801DE14C 001DAF4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801DE150 001DAF50*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*801DE154 001DAF54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*801DE158 001DAF58*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801DE15C 001DAF5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*801DE160 001DAF60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*801DE164 001DAF64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*801DE168 001DAF68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*801DE16C 001DAF6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*801DE170 001DAF70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*801DE174 001DAF74*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*801DE178 001DAF78*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r31));
/*801DE17C 001DAF7C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r31));
/*801DE180 001DAF80*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53, context->r31));
/*801DE184 001DAF84*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*801DE188 001DAF88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*801DE18C 001DAF8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*801DE190 001DAF90*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*801DE194 001DAF94*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*801DE198 001DAF98*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*801DE19C 001DAF9C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DE1A0, 0x801DE1A0) //this is a jump label
/*801DE1A0 001DAFA0*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x6c);
/*801DE1A4 001DAFA4*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*801DE1A8 001DAFA8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801DE1AC 001DAFAC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801DE1B0 001DAFB0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*801DE1B4 001DAFB4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*801DE1B8 001DAFB8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801DE1BC 001DAFBC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*801DE1C0 001DAFC0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*801DE1C4 001DAFC4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*801DE1C8 001DAFC8*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x74);
/*801DE1CC 001DAFCC*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*801DE1D0 001DAFD0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801DE1D4 001DAFD4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801DE1D8 001DAFD8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*801DE1DC 001DAFDC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*801DE1E0 001DAFE0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801DE1E4 001DAFE4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*801DE1E8 001DAFE8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*801DE1EC 001DAFEC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*801DE1F0 001DAFF0*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x7c);
/*801DE1F4 001DAFF4*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*801DE1F8 001DAFF8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801DE1FC 001DAFFC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801DE200 001DB000*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*801DE204 001DB004*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*801DE208 001DB008*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801DE20C 001DB00C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*801DE210 001DB010*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*801DE214 001DB014*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*801DE218 001DB018*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x84);
/*801DE21C 001DB01C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*801DE220 001DB020*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x20);
/*801DE224 001DB024*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801DE228 001DB028*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801DE22C 001DB02C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*801DE230 001DB030*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*801DE234 001DB034*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801DE238 001DB038*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*801DE23C 001DB03C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*801DE240 001DB040*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*801DE244 001DB044*/ PPC::Runtime::ASM::bdnz(.L_801DE1A0);
/*801DE248 001DB048*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801DE24C 001DB04C*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*801DE250 001DB050*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*801DE254 001DB054*/ PPC::Runtime::ASM::subfic(context->r0, context->r4, 0x1a);
/*801DE258 001DB058*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad, context->r31));
/*801DE25C 001DB05C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xae, context->r31));
/*801DE260 001DB060*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf, context->r31));
/*801DE264 001DB064*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*801DE268 001DB068*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb1, context->r31));
/*801DE26C 001DB06C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb2, context->r31));
/*801DE270 001DB070*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb3, context->r31));
/*801DE274 001DB074*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*801DE278 001DB078*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5, context->r31));
/*801DE27C 001DB07C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb6, context->r31));
/*801DE280 001DB080*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7, context->r31));
/*801DE284 001DB084*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*801DE288 001DB088*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9, context->r31));
/*801DE28C 001DB08C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xba, context->r31));
/*801DE290 001DB090*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbb, context->r31));
/*801DE294 001DB094*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*801DE298 001DB098*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd, context->r31));
/*801DE29C 001DB09C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe, context->r31));
/*801DE2A0 001DB0A0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf, context->r31));
/*801DE2A4 001DB0A4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*801DE2A8 001DB0A8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc1, context->r31));
/*801DE2AC 001DB0AC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc2, context->r31));
/*801DE2B0 001DB0B0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3, context->r31));
/*801DE2B4 001DB0B4*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801DE2B8 001DB0B8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1a);
/*801DE2BC 001DB0BC*/ PPC::Runtime::ASM::bge(.L_801DE2D0);
RUNTIME_PPC_JUMP_LABEL(.L_801DE2C0, 0x801DE2C0) //this is a jump label
/*801DE2C0 001DB0C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0xac);
/*801DE2C4 001DB0C4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*801DE2C8 001DB0C8*/ PPC::Runtime::ASM::stbx(context->r3, context->r31, context->r0);
/*801DE2CC 001DB0CC*/ PPC::Runtime::ASM::bdnz(.L_801DE2C0);
RUNTIME_PPC_JUMP_LABEL(.L_801DE2D0, 0x801DE2D0) //this is a jump label
/*801DE2D0 001DB0D0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801DE2D4, 0x801DE2D4) //this is a jump label
/*801DE2D4 001DB0D4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801DE2D8 001DB0D8*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*801DE2DC 001DB0DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801DE2E0 001DB0E0*/ PPC::Runtime::ASM::beq(.L_801DE2EC);
/*801DE2E4 001DB0E4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*801DE2E8 001DB0E8*/ PPC::Runtime::ASM::bne(.L_801DE304);
RUNTIME_PPC_JUMP_LABEL(.L_801DE2EC, 0x801DE2EC) //this is a jump label
/*801DE2EC 001DB0EC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801DE2F0 001DB0F0*/ PPC::Runtime::ASM::bl(fn_8022C910);
/*801DE2F4 001DB0F4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xac);
/*801DE2F8 001DB0F8*/ PPC::Runtime::ASM::lbzx(context->r3, context->r31, context->r4);
/*801DE2FC 001DB0FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*801DE300 001DB100*/ PPC::Runtime::ASM::stbx(context->r0, context->r31, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_801DE304, 0x801DE304) //this is a jump label
/*801DE304 001DB104*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*801DE308 001DB108*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x5);
/*801DE30C 001DB10C*/ PPC::Runtime::ASM::blt(.L_801DE2D4);
/*801DE310 001DB110*/ PPC::Runtime::ASM::bl(fn_grGetVehicleposNum);
/*801DE314 001DB114*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801DE318 001DB118*/ PPC::Runtime::ASM::bl(fn_grGetVehicleAreaposNum);
/*801DE31C 001DB11C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801DE320 001DB120*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801DE324 001DB124*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801DE328 001DB128*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r31));
/*801DE32C 001DB12C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801DE330 001DB130*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r31));
/*801DE334 001DB134*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r31));
/*801DE338 001DB138*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*801DE33C 001DB13C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r31));
/*801DE340 001DB140*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r31));
/*801DE344 001DB144*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801DE348 001DB148*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r31));
/*801DE34C 001DB14C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*801DE350 001DB150*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*801DE354 001DB154*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*801DE358 001DB158*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801DE35C 001DB15C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801DE360 001DB160*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DE364 001DB164*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*801DE368 001DB168*/ PPC::Runtime::ASM::blr();
}