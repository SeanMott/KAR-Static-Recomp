//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_8014A498.hpp"
#include "fn_8014A498.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_80138B10.hpp"
#include "fn_8014A720.hpp"



void fn_8014A584(PPC::Runtime::GCContext* context)
{
/*8014A584 00147384*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014A588 00147388*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014A58C 0014738C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014A590 00147390*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014A594 00147394*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014A598 00147398*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A59C 0014739C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014A5A0 001473A0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014A5A4 001473A4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8014A5A8 001473A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x378, context->r3));
/*8014A5AC 001473AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014A5B0 001473B0*/ PPC::Runtime::ASM::beq(.L_8014A5C0);
/*8014A5B4 001473B4*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014A5B8 001473B8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014A5BC 001473BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x378, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8014A5C0, 0x8014A5C0) //this is a jump label
/*8014A5C0 001473C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x374, context->r30));
/*8014A5C4 001473C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014A5C8 001473C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014A5CC 001473CC*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*8014A5D0 001473D0*/ PPC::Runtime::ASM::lis(context->r4, fn_8014A498 @ Get_MemoryOffset_HighBit);
/*8014A5D4 001473D4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014A5D8 001473D8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8014A5DC 001473DC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8014A5E0 001473E0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8014A498 @ Get_MemoryOffset_LowBit);
/*8014A5E4 001473E4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8014A5E8 001473E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014A5EC 001473EC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8014A5F0 001473F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x374, context->r30));
/*8014A5F4 001473F4*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8014A5F8 001473F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8014A5FC 001473FC*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8014A600 00147400*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8014A604 00147404*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8014A608 00147408*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8014A60C 0014740C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x374, context->r30));
/*8014A610 00147410*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014A614 00147414*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014A618 00147418*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8014A61C 0014741C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8014A620 00147420*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8014A624 00147424*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E056C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014A628 00147428*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*8014A62C 0014742C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8014A630 00147430*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8014A634 00147434*/ PPC::Runtime::ASM::bl(fn_8014A720);
/*8014A638 00147438*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x378, context->r30));
/*8014A63C 0014743C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014A640 00147440*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014A644 00147444*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014A648 00147448*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A64C 0014744C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014A650 00147450*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014A654 00147454*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014A658 00147458*/ PPC::Runtime::ASM::blr();
}