//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7628.hpp"
#include "fn_8026DA40.hpp"
#include "fn_8026C100.hpp"
#include "fn_8026D6A0.hpp"



void fn_8026DD4C(PPC::Runtime::GCContext* context)
{
/*8026DD4C 0026AB4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8026DD50 0026AB50*/ PPC::Runtime::ASM::mflr(context->r0);
/*8026DD54 0026AB54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8026DD58 0026AB58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026DD5C 0026AB5C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026DD60 0026AB60*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8026DD64 0026AB64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*8026DD68 0026AB68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r30));
/*8026DD6C 0026AB6C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026DD70 0026AB70*/ PPC::Runtime::ASM::beq(.L_8026DD94);
/*8026DD74 0026AB74*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8026DD78 0026AB78*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r6));
/*8026DD7C 0026AB7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r6));
/*8026DD80 0026AB80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r6));
/*8026DD84 0026AB84*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8026DD88 0026AB88*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8026DD8C 0026AB8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8026DD90 0026AB90*/ PPC::Runtime::ASM::b(.L_8026DDAC);
RUNTIME_PPC_JUMP_LABEL(.L_8026DD94, 0x8026DD94) //this is a jump label
/*8026DD94 0026AB94*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*8026DD98 0026AB98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*8026DD9C 0026AB9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*8026DDA0 0026ABA0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8026DDA4 0026ABA4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8026DDA8 0026ABA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026DDAC, 0x8026DDAC) //this is a jump label
/*8026DDAC 0026ABAC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8026DDB0 0026ABB0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026DDB4 0026ABB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8026DDB8 0026ABB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8026DDBC 0026ABBC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8026DDC0 0026ABC0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026DDC4 0026ABC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8026DDC8 0026ABC8*/ PPC::Runtime::ASM::beq(.L_8026DDD8);
/*8026DDCC 0026ABCC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8026DDD0 0026ABD0*/ PPC::Runtime::ASM::bl(fn_801C7628);
/*8026DDD4 0026ABD4*/ PPC::Runtime::ASM::b(.L_8026DDF0);
RUNTIME_PPC_JUMP_LABEL(.L_8026DDD8, 0x8026DDD8) //this is a jump label
/*8026DDD8 0026ABD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*8026DDDC 0026ABDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r30));
/*8026DDE0 0026ABE0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026DDE4 0026ABE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8026DDE8 0026ABE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r30));
/*8026DDEC 0026ABEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026DDF0, 0x8026DDF0) //this is a jump label
/*8026DDF0 0026ABF0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026DDF4 0026ABF4*/ PPC::Runtime::ASM::bl(fn_8026DA40);
/*8026DDF8 0026ABF8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026DDFC 0026ABFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8026DE00 0026AC00*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8026DE04 0026AC04*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8026DE08 0026AC08*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026DE0C 0026AC0C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8026DE10 0026AC10*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026DE14 0026AC14*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*8026DE18 0026AC18*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026DE1C 0026AC1C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*8026DE20 0026AC20*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026DE24 0026AC24*/ PPC::Runtime::ASM::bge(.L_8026DE34);
/*8026DE28 0026AC28*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8026DE2C 0026AC2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8026DE30 0026AC30*/ PPC::Runtime::ASM::b(.L_8026DE50);
RUNTIME_PPC_JUMP_LABEL(.L_8026DE34, 0x8026DE34) //this is a jump label
/*8026DE34 0026AC34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026DE38 0026AC38*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8026DE3C 0026AC3C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8026DE40 0026AC40*/ PPC::Runtime::ASM::bl(fn_8026C100);
/*8026DE44 0026AC44*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026DE48 0026AC48*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8026DE4C 0026AC4C*/ PPC::Runtime::ASM::bl(fn_8026D6A0);
RUNTIME_PPC_JUMP_LABEL(.L_8026DE50, 0x8026DE50) //this is a jump label
/*8026DE50 0026AC50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8026DE54 0026AC54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026DE58 0026AC58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026DE5C 0026AC5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8026DE60 0026AC60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8026DE64 0026AC64*/ PPC::Runtime::ASM::blr();
}