//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D5E34.hpp"
#include "fn_801D5E34.hpp"
#include "fn_801DD17C.hpp"
#include "fn_801D5CA0.hpp"



void fn_801CA4C0(PPC::Runtime::GCContext* context)
{
/*801CA4C0 001C72C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CA4C4 001C72C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CA4C8 001C72C8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801CA4CC 001C72CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CA4D0 001C72D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CA4D4 001C72D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CA4D8 001C72D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r3));
/*801CA4DC 001C72DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*801CA4E0 001C72E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r3));
/*801CA4E4 001C72E4*/ PPC::Runtime::ASM::extrwi(context->r4, context->r0, 1, 26);
/*801CA4E8 001C72E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r3));
/*801CA4EC 001C72EC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*801CA4F0 001C72F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r3));
/*801CA4F4 001C72F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x794, context->r3));
/*801CA4F8 001C72F8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801CA4FC 001C72FC*/ PPC::Runtime::ASM::beq(.L_801CA51C);
/*801CA500 001C7300*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*801CA504 001C7304*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x794, context->r31));
/*801CA508 001C7308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x794, context->r31));
/*801CA50C 001C730C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801CA510 001C7310*/ PPC::Runtime::ASM::bne(.L_801CA51C);
/*801CA514 001C7314*/ PPC::Runtime::ASM::li(context->r4, 0x1f);
/*801CA518 001C7318*/ PPC::Runtime::ASM::bl(fn_801D5E34);
RUNTIME_PPC_JUMP_LABEL(.L_801CA51C, 0x801CA51C) //this is a jump label
/*801CA51C 001C731C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x790, context->r31));
/*801CA520 001C7320*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CA524 001C7324*/ PPC::Runtime::ASM::beq(.L_801CA5D0);
/*801CA528 001C7328*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801CA52C 001C732C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x790, context->r31));
/*801CA530 001C7330*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x790, context->r31));
/*801CA534 001C7334*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801CA538 001C7338*/ PPC::Runtime::ASM::bne(.L_801CA5D0);
/*801CA53C 001C733C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801CA540 001C7340*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801CA544 001C7344*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 5, 26, 26);
/*801CA548 001C7348*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA54C 001C734C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801CA550 001C7350*/ PPC::Runtime::ASM::extrwi(context->r6, context->r0, 1, 26);
/*801CA554 001C7354*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801CA558 001C7358*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CA55C 001C735C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801CA560 001C7360*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r6, 4, 27, 27);
/*801CA564 001C7364*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*801CA568 001C7368*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801CA56C 001C736C*/ PPC::Runtime::ASM::extrwi(context->r6, context->r5, 1, 27);
/*801CA570 001C7370*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801CA574 001C7374*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r6, 6, 25, 25);
/*801CA578 001C7378*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801CA57C 001C737C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78c, context->r31));
/*801CA580 001C7380*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x798, context->r31));
/*801CA584 001C7384*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x790, context->r31));
/*801CA588 001C7388*/ PPC::Runtime::ASM::bl(fn_801D5E34);
/*801CA58C 001C738C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b4, context->r31));
/*801CA590 001C7390*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CA594 001C7394*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1A08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA598 001C7398*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x794, context->r31));
/*801CA59C 001C739C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801CA5A0 001C73A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801CA5A4 001C73A4*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD844 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA5A8 001C73A8*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 2);
/*801CA5AC 001C73AC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x94);
/*801CA5B0 001C73B0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r5, context->r4);
/*801CA5B4 001C73B4*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*801CA5B8 001C73B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*801CA5BC 001C73BC*/ PPC::Runtime::ASM::bl(fn_801DD17C);
/*801CA5C0 001C73C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CA5C4 001C73C4*/ PPC::Runtime::ASM::li(context->r4, 0x1f);
/*801CA5C8 001C73C8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801CA5CC 001C73CC*/ PPC::Runtime::ASM::bl(fn_801D5CA0);
RUNTIME_PPC_JUMP_LABEL(.L_801CA5D0, 0x801CA5D0) //this is a jump label
/*801CA5D0 001C73D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CA5D4 001C73D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CA5D8 001C73D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CA5DC 001C73DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CA5E0 001C73E0*/ PPC::Runtime::ASM::blr();
}