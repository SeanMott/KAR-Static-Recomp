//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_801567C0.hpp"
#include "fn_801567C0.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"
#include "fn_80138A00.hpp"



void fn_8015693C(PPC::Runtime::GCContext* context)
{
/*8015693C 0015373C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80156940 00153740*/ PPC::Runtime::ASM::mflr(context->r0);
/*80156944 00153744*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80156948 00153748*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8015694C 0015374C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80156950 00153750*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80156954 00153754*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80156958 00153758*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*8015695C 0015375C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x6a8);
/*80156960 00153760*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80156964 00153764*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r0);
/*80156968 00153768*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8015696C 0015376C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80156970 00153770*/ PPC::Runtime::ASM::beq(.L_80156980);
/*80156974 00153774*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80156978 00153778*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8015697C 0015377C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80156980, 0x80156980) //this is a jump label
/*80156980 00153780*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80156984 00153784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80156988 00153788*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015698C 0015378C*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*80156990 00153790*/ PPC::Runtime::ASM::lis(context->r4, fn_801567C0 @ Get_MemoryOffset_HighBit);
/*80156994 00153794*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80156998 00153798*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8015699C 0015379C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801569A0 001537A0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801567C0 @ Get_MemoryOffset_LowBit);
/*801569A4 001537A4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801569A8 001537A8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801569AC 001537AC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801569B0 001537B0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E07B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801569B4 001537B4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801569B8 001537B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801569BC 001537BC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E07B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801569C0 001537C0*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*801569C4 001537C4*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801569C8 001537C8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801569CC 001537CC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*801569D0 001537D0*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801569D4 001537D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801569D8 001537D8*/ PPC::Runtime::ASM::li(context->r4, 0x34);
/*801569DC 001537DC*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*801569E0 001537E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801569E4 001537E4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*801569E8 001537E8*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801569EC 001537EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*801569F0 001537F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801569F4 001537F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801569F8 001537F8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*801569FC 001537FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80156A00 00153800*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80156A04 00153804*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80156A08 00153808*/ PPC::Runtime::ASM::blr();
}