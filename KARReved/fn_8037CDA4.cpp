//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037B028.hpp"
#include "fn_8037CCDC.hpp"
#include "fn_8028DF40.hpp"
#include "fn_8037CCDC.hpp"
#include "fn_8028DF40.hpp"
#include "fn_8037CB44.hpp"
#include "fn_8037CB44.hpp"



void fn_8037CDA4(PPC::Runtime::GCContext* context)
{
/*8037CDA4 00379BA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8037CDA8 00379BA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037CDAC 00379BAC*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8037CDB0 00379BB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037CDB4 00379BB4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8037CDB8 00379BB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037CDBC 00379BBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037CDC0 00379BC0*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8037CDC4 00379BC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037CDC8 00379BC8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8037CDCC 00379BCC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037CDD0 00379BD0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037CDD4 00379BD4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8037CDD8 00379BD8*/ PPC::Runtime::ASM::mr(context->r7, context->r28);
/*8037CDDC 00379BDC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8037CDE0 00379BE0*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*8037CDE4 00379BE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8037CDE8 00379BE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8037CDEC 00379BEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037CDF0 00379BF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8037CDF4 00379BF4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037CDF8 00379BF8*/ PPC::Runtime::ASM::bctrl();
/*8037CDFC 00379BFC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8037CE00 00379C00*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8037CE04 00379C04*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8037CE08 00379C08*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8037CE0C 00379C0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8037CE10 00379C10*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037CE14 00379C14*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037CE18 00379C18*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037CE1C 00379C1C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037CE20 00379C20*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8037CE24 00379C24*/ PPC::Runtime::ASM::lis(context->r3, fn_8037CCDC @ Get_MemoryOffset_HighBit);
/*8037CE28 00379C28*/ PPC::Runtime::ASM::lis(context->r5, fn_8028DF40 @ Get_MemoryOffset_HighBit);
/*8037CE2C 00379C2C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_8037CCDC @ Get_MemoryOffset_LowBit);
/*8037CE30 00379C30*/ PPC::Runtime::ASM::li(context->r6, 0x70);
/*8037CE34 00379C34*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x4c);
/*8037CE38 00379C38*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_8028DF40 @ Get_MemoryOffset_LowBit);
/*8037CE3C 00379C3C*/ PPC::Runtime::ASM::li(context->r7, 0xa);
/*8037CE40 00379C40*/ PPC::Runtime::ASM::bl(fn___construct_array);
/*8037CE44 00379C44*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037CE48 00379C48*/ PPC::Runtime::ASM::lis(context->r3, fn_8037CB44 @ Get_MemoryOffset_HighBit);
/*8037CE4C 00379C4C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r28));
/*8037CE50 00379C50*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8037CB44 @ Get_MemoryOffset_LowBit);
/*8037CE54 00379C54*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8037CE58 00379C58*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r28));
/*8037CE5C 00379C5C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b4, context->r28));
/*8037CE60 00379C60*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r28));
/*8037CE64 00379C64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*8037CE68 00379C68*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r28));
/*8037CE6C 00379C6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r28));
/*8037CE70 00379C70*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r28));
/*8037CE74 00379C74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037CE78 00379C78*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037CE7C 00379C7C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037CE80 00379C80*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037CE84 00379C84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037CE88 00379C88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037CE8C 00379C8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8037CE90 00379C90*/ PPC::Runtime::ASM::blr();
}