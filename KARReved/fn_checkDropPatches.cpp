//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019D55C.hpp"
#include "fn_8019D9B4.hpp"



void fn_checkDropPatches(PPC::Runtime::GCContext* context)
{
/*8019DC74 0019AA74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8019DC78 0019AA78*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019DC7C 0019AA7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019DC80 0019AA80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019DC84 0019AA84*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019DC88 0019AA88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r3));
/*8019DC8C 0019AA8C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8019DC90 0019AA90*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*8019DC94 0019AA94*/ PPC::Runtime::ASM::beq(.L_8019DDA0);
/*8019DC98 0019AA98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r31));
/*8019DC9C 0019AA9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8019DCA0 0019AAA0*/ PPC::Runtime::ASM::bne(.L_8019DD94);
/*8019DCA4 0019AAA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a4, context->r31));
/*8019DCA8 0019AAA8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8019DCAC 0019AAAC*/ PPC::Runtime::ASM::beq(.L_8019DCBC);
/*8019DCB0 0019AAB0*/ PPC::Runtime::ASM::bl(fn_8019D55C);
/*8019DCB4 0019AAB4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8019DCB8 0019AAB8*/ PPC::Runtime::ASM::b(.L_8019DD94);
RUNTIME_PPC_JUMP_LABEL(.L_8019DCBC, 0x8019DCBC) //this is a jump label
/*8019DCBC 0019AABC*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8019DCC0 0019AAC0*/ PPC::Runtime::ASM::mr(context->r7, context->r4);
/*8019DCC4 0019AAC4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E11B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019DCC8 0019AAC8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8019DCCC 0019AACC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E11C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019DCD0 0019AAD0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8019DCD4 0019AAD4*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8019DCD8 0019AAD8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8019DCDC, 0x8019DCDC) //this is a jump label
/*8019DCDC 0019AADC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8019DCE0 0019AAE0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*8019DCE4 0019AAE4*/ PPC::Runtime::ASM::ble(.L_8019DD0C);
/*8019DCE8 0019AAE8*/ PPC::Runtime::ASM::xoris(context->r0, context->r6, 0x8000);
/*8019DCEC 0019AAEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019DCF0 0019AAF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019DCF4 0019AAF4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019DCF8 0019AAF8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8019DCFC 0019AAFC*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*8019DD00 0019AB00*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8019DD04 0019AB04*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019DD08 0019AB08*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8019DD0C, 0x8019DD0C) //this is a jump label
/*8019DD0C 0019AB0C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8019DD10 0019AB10*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*8019DD14 0019AB14*/ PPC::Runtime::ASM::ble(.L_8019DD3C);
/*8019DD18 0019AB18*/ PPC::Runtime::ASM::xoris(context->r0, context->r6, 0x8000);
/*8019DD1C 0019AB1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019DD20 0019AB20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019DD24 0019AB24*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019DD28 0019AB28*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8019DD2C 0019AB2C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*8019DD30 0019AB30*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8019DD34 0019AB34*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019DD38 0019AB38*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8019DD3C, 0x8019DD3C) //this is a jump label
/*8019DD3C 0019AB3C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8019DD40 0019AB40*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*8019DD44 0019AB44*/ PPC::Runtime::ASM::ble(.L_8019DD6C);
/*8019DD48 0019AB48*/ PPC::Runtime::ASM::xoris(context->r0, context->r6, 0x8000);
/*8019DD4C 0019AB4C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019DD50 0019AB50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019DD54 0019AB54*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019DD58 0019AB58*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8019DD5C 0019AB5C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*8019DD60 0019AB60*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8019DD64 0019AB64*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019DD68 0019AB68*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8019DD6C, 0x8019DD6C) //this is a jump label
/*8019DD6C 0019AB6C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0xc);
/*8019DD70 0019AB70*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2);
/*8019DD74 0019AB74*/ PPC::Runtime::ASM::bdnz(.L_8019DCDC);
/*8019DD78 0019AB78*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*8019DD7C 0019AB7C*/ PPC::Runtime::ASM::beq(.L_8019DD90);
/*8019DD80 0019AB80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019DD84 0019AB84*/ PPC::Runtime::ASM::bl(fn_8019D9B4);
/*8019DD88 0019AB88*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8019DD8C 0019AB8C*/ PPC::Runtime::ASM::b(.L_8019DD94);
RUNTIME_PPC_JUMP_LABEL(.L_8019DD90, 0x8019DD90) //this is a jump label
/*8019DD90 0019AB90*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019DD94, 0x8019DD94) //this is a jump label
/*8019DD94 0019AB94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r31));
/*8019DD98 0019AB98*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8019DD9C 0019AB9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8019DDA0, 0x8019DDA0) //this is a jump label
/*8019DDA0 0019ABA0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r31));
/*8019DDA4 0019ABA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019DDA8 0019ABA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019DDAC 0019ABAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019DDB0 0019ABB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8019DDB4 0019ABB4*/ PPC::Runtime::ASM::blr();
}