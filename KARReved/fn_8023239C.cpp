//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8023239C(PPC::Runtime::GCContext* context)
{
/*8023239C 0022F19C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802323A0 0022F1A0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055D730 @ Get_MemoryOffset_HighBit);
/*802323A4 0022F1A4*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*802323A8 0022F1A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802323AC 0022F1AC*/ PPC::Runtime::ASM::li(context->r31, 0x13);
/*802323B0 0022F1B0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802323B4 0022F1B4*/ PPC::Runtime::ASM::li(context->r30, -0x1);
/*802323B8 0022F1B8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802323BC 0022F1BC*/ PPC::Runtime::ASM::addi(context->r29, context->r3, STRUCT_BYTE4_COUNT_18055D730 @ Get_MemoryOffset_LowBit);
/*802323C0 0022F1C0*/ PPC::Runtime::ASM::lbz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*802323C4 0022F1C4*/ PPC::Runtime::ASM::rlwimi(context->r11, context->r12, 7, 24, 24);
/*802323C8 0022F1C8*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r29));
/*802323CC 0022F1CC*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r12, 7, 24, 24);
/*802323D0 0022F1D0*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r29));
/*802323D4 0022F1D4*/ PPC::Runtime::ASM::rlwimi(context->r7, context->r12, 7, 24, 24);
/*802323D8 0022F1D8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r29));
/*802323DC 0022F1DC*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r12, 7, 24, 24);
/*802323E0 0022F1E0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r29));
/*802323E4 0022F1E4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r12, 7, 24, 24);
/*802323E8 0022F1E8*/ PPC::Runtime::ASM::clrlwi(context->r10, context->r11, 24);
/*802323EC 0022F1EC*/ PPC::Runtime::ASM::clrlwi(context->r8, context->r9, 24);
/*802323F0 0022F1F0*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r7, 24);
/*802323F4 0022F1F4*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r5, 24);
/*802323F8 0022F1F8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*802323FC 0022F1FC*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*80232400 0022F200*/ PPC::Runtime::ASM::rlwimi(context->r10, context->r12, 6, 25, 25);
/*80232404 0022F204*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r12, 6, 25, 25);
/*80232408 0022F208*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r29));
/*8023240C 0022F20C*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r12, 6, 25, 25);
/*80232410 0022F210*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r12, 6, 25, 25);
/*80232414 0022F214*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r12, 6, 25, 25);
/*80232418 0022F218*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r29));
/*8023241C 0022F21C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r29));
/*80232420 0022F220*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r29));
/*80232424 0022F224*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80232428 0022F228*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8023242C 0022F22C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80232430 0022F230*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*80232434 0022F234*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80232438 0022F238*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8023243C 0022F23C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80232440 0022F240*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r29));
/*80232444 0022F244*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80232448 0022F248*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8023244C 0022F24C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80232450 0022F250*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r29));
/*80232454 0022F254*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80232458 0022F258*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8023245C 0022F25C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80232460 0022F260*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r29));
/*80232464 0022F264*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80232468 0022F268*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8023246C 0022F26C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80232470 0022F270*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r29));
/*80232474 0022F274*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80232478 0022F278*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023247C 0022F27C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232480 0022F280*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80232484 0022F284*/ PPC::Runtime::ASM::blr();
}