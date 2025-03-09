//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ac_Math_SineFunction.hpp"
#include "fn_ac_Math_CosineFunction.hpp"
#include "fn_ac_Math_SineFunction.hpp"
#include "fn_ac_Math_CosineFunction.hpp"
#include "fn_ac_Math_SineFunction.hpp"
#include "fn_ac_Math_CosineFunction.hpp"



void fn_HSD_MkRotationMtx(PPC::Runtime::GCContext* context)
{
/*80416FFC 00413DFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80417000 00413E00*/ PPC::Runtime::ASM::mflr(context->r0);
/*80417004 00413E04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80417008 00413E08*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8041700C 00413E0C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80417010 00413E10*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80417014 00413E14*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80417018 00413E18*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8041701C 00413E1C*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80417020 00413E20*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80417024 00413E24*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80417028 00413E28*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8041702C 00413E2C*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80417030 00413E30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80417034 00413E34*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80417038 00413E38*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8041703C 00413E3C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80417040 00413E40*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80417044 00413E44*/ PPC::Runtime::ASM::bl(fn_ac_Math_SineFunction);
/*80417048 00413E48*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*8041704C 00413E4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80417050 00413E50*/ PPC::Runtime::ASM::bl(fn_ac_Math_CosineFunction);
/*80417054 00413E54*/ PPC::Runtime::ASM::fmr(context->f28, context->f1);
/*80417058 00413E58*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8041705C 00413E5C*/ PPC::Runtime::ASM::bl(fn_ac_Math_SineFunction);
/*80417060 00413E60*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*80417064 00413E64*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80417068 00413E68*/ PPC::Runtime::ASM::bl(fn_ac_Math_CosineFunction);
/*8041706C 00413E6C*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80417070 00413E70*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80417074 00413E74*/ PPC::Runtime::ASM::bl(fn_ac_Math_SineFunction);
/*80417078 00413E78*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8041707C 00413E7C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80417080 00413E80*/ PPC::Runtime::ASM::bl(fn_ac_Math_CosineFunction);
/*80417084 00413E84*/ PPC::Runtime::ASM::fmuls(context->f3, context->f30, context->f1);
/*80417088 00413E88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041708C 00413E8C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f30, context->f31);
/*80417090 00413E90*/ PPC::Runtime::ASM::fmuls(context->f5, context->f27, context->f29);
/*80417094 00413E94*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80417098 00413E98*/ PPC::Runtime::ASM::fmuls(context->f3, context->f28, context->f31);
/*8041709C 00413E9C*/ PPC::Runtime::ASM::fneg(context->f4, context->f29);
/*804170A0 00413EA0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*804170A4 00413EA4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f28, context->f1);
/*804170A8 00413EA8*/ PPC::Runtime::ASM::fmsubs(context->f3, context->f1, context->f5, context->f3);
/*804170AC 00413EAC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*804170B0 00413EB0*/ PPC::Runtime::ASM::fmuls(context->f6, context->f28, context->f29);
/*804170B4 00413EB4*/ PPC::Runtime::ASM::fmadds(context->f2, context->f31, context->f5, context->f2);
/*804170B8 00413EB8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*804170BC 00413EBC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f27, context->f31);
/*804170C0 00413EC0*/ PPC::Runtime::ASM::fmuls(context->f4, context->f27, context->f30);
/*804170C4 00413EC4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*804170C8 00413EC8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f27, context->f1);
/*804170CC 00413ECC*/ PPC::Runtime::ASM::fmadds(context->f3, context->f1, context->f6, context->f3);
/*804170D0 00413ED0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*804170D4 00413ED4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f28, context->f30);
/*804170D8 00413ED8*/ PPC::Runtime::ASM::fmsubs(context->f2, context->f31, context->f6, context->f2);
/*804170DC 00413EDC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*804170E0 00413EE0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*804170E4 00413EE4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*804170E8 00413EE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*804170EC 00413EEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*804170F0 00413EF0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*804170F4 00413EF4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*804170F8 00413EF8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*804170FC 00413EFC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80417100 00413F00*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80417104 00413F04*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80417108 00413F08*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8041710C 00413F0C*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80417110 00413F10*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80417114 00413F14*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80417118 00413F18*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8041711C 00413F1C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80417120 00413F20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80417124 00413F24*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80417128 00413F28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041712C 00413F2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80417130 00413F30*/ PPC::Runtime::ASM::blr();
}