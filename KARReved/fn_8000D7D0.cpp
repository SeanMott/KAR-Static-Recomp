//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80077980.hpp"
#include "fn_80078604.hpp"
#include "fn_80078620.hpp"
#include "fn_80078604.hpp"
#include "fn_80078620.hpp"
#include "fn_80077B50.hpp"
#include "fn_800064F0.hpp"
#include "fn_8000D768.hpp"
#include "fn_8000D768.hpp"
#include "fn_80077ED4.hpp"
#include "fn_8000A498.hpp"



void fn_8000D7D0(PPC::Runtime::GCContext* context)
{
/*8000D7D0 0000A5D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000D7D4 0000A5D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000D7D8 0000A5D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000D7DC 0000A5DC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000D7E0 0000A5E0*/ PPC::Runtime::ASM::bl(fn_80077980);
/*8000D7E4 0000A5E4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_143 @ Get_MemoryOffset_HighBit);
/*8000D7E8 0000A5E8*/ PPC::Runtime::ASM::lis(context->r6, fn_80078604 @ Get_MemoryOffset_HighBit);
/*8000D7EC 0000A5EC*/ PPC::Runtime::ASM::lis(context->r5, fn_80078620 @ Get_MemoryOffset_HighBit);
/*8000D7F0 0000A5F0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8000D7F4 0000A5F4*/ PPC::Runtime::ASM::addi(context->r7, context->r6, fn_80078604 @ Get_MemoryOffset_LowBit);
/*8000D7F8 0000A5F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_143 @ Get_MemoryOffset_LowBit);
/*8000D7FC 0000A5FC*/ PPC::Runtime::ASM::addi(context->r8, context->r5, fn_80078620 @ Get_MemoryOffset_LowBit);
/*8000D800 0000A600*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8000D804 0000A604*/ PPC::Runtime::ASM::li(context->r6, 0x18);
/*8000D808 0000A608*/ PPC::Runtime::ASM::bl(fn_80077B50);
/*8000D80C 0000A60C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8000D810 0000A610*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D814 0000A614*/ PPC::Runtime::ASM::bne(.L_8000D820);
/*8000D818 0000A618*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*8000D81C 0000A61C*/ PPC::Runtime::ASM::b(.L_8000D8B4);
RUNTIME_PPC_JUMP_LABEL(.L_8000D820, 0x8000D820) //this is a jump label
/*8000D820 0000A620*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*8000D824 0000A624*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*8000D828 0000A628*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8000D82C 0000A62C*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8000D830 0000A630*/ PPC::Runtime::ASM::lis(context->r4, fn_8000D768 @ Get_MemoryOffset_HighBit);
/*8000D834 0000A634*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D838 0000A638*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8000D768 @ Get_MemoryOffset_LowBit);
/*8000D83C 0000A63C*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*8000D840 0000A640*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8000D844 0000A644*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*8000D848 0000A648*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8000D84C 0000A64C*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*8000D850 0000A650*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8000D854 0000A654*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8000D858 0000A658*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_142 @ Get_MemoryOffset_HighBit);
/*8000D85C 0000A65C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD564 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D860 0000A660*/ PPC::Runtime::ASM::addi(context->r3, context->r4, MemoryOffset_142 @ Get_MemoryOffset_LowBit);
/*8000D864 0000A664*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*8000D868 0000A668*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8000D86C 0000A66C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD564 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D870 0000A670*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D874 0000A674*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*8000D878 0000A678*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8000D87C 0000A67C*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A29C @ Get_MemoryOffset_HighBit);
/*8000D880 0000A680*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD564 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D884 0000A684*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A29C @ Get_MemoryOffset_LowBit);
/*8000D888 0000A688*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8000D88C 0000A68C*/ PPC::Runtime::ASM::bl(fn_80429728);
/*8000D890 0000A690*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD564 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D894 0000A694*/ PPC::Runtime::ASM::lis(context->r4, 0x20);
/*8000D898 0000A698*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8000D89C 0000A69C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8000D8A0 0000A6A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8000D8A4 0000A6A4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D8A8 0000A6A8*/ PPC::Runtime::ASM::bl(fn_80077ED4);
/*8000D8AC 0000A6AC*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*8000D8B0 0000A6B0*/ PPC::Runtime::ASM::bl(fn_8000A498);
RUNTIME_PPC_JUMP_LABEL(.L_8000D8B4, 0x8000D8B4) //this is a jump label
/*8000D8B4 0000A6B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000D8B8 0000A6B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000D8BC 0000A6BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000D8C0 0000A6C0*/ PPC::Runtime::ASM::blr();
}