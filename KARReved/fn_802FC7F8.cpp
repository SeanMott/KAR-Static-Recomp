//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037B33C.hpp"
#include "fn_802EFFB8.hpp"



void fn_802FC7F8(PPC::Runtime::GCContext* context)
{
/*802FC7F8 002F95F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802FC7FC 002F95FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FC800 002F9600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FC804 002F9604*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FC808 002F9608*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802FC80C 002F960C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 802FC810 002F9610  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FC814 002F9614*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FC818 002F9618*/ PPC::Runtime::ASM::beq(.L_802FC96C);
/*802FC81C 002F961C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D953C @ Get_MemoryOffset_HighBit);
/*802FC820 002F9620*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*802FC824 002F9624*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D953C @ Get_MemoryOffset_LowBit);
/*802FC828 002F9628*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC82C 002F962C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC830 002F9630*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc4, context->r29));
/*802FC834 002F9634*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*802FC838 002F9638*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FC83C 002F963C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*802FC840 002F9640*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc8, context->r29));
/*802FC844 002F9644*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802FC848 002F9648*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FC84C 002F964C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbcc, context->r29));
/*802FC850 002F9650*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd8, context->r29));
/*802FC854 002F9654*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd4, context->r29));
/*802FC858 002F9658*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd0, context->r29));
/*802FC85C 002F965C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbdc, context->r29));
/*802FC860 002F9660*/ PPC::Runtime::ASM::beq(.L_802FC8A4);
/*802FC864 002F9664*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*802FC868 002F9668*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3c);
/*802FC86C 002F966C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*802FC870 002F9670*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FC874 002F9674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802FC878 002F9678*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*802FC87C 002F967C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802FC880 002F9680*/ PPC::Runtime::ASM::beq(.L_802FC8A4);
/*802FC884 002F9684*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*802FC888 002F9688*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3c);
/*802FC88C 002F968C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*802FC890 002F9690*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802FC894 002F9694*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802FC898 002F9698*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FC89C 002F969C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC8A0 002F96A0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FC8A4, 0x802FC8A4) //this is a jump label
/*802FC8A4 002F96A4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC8A8 002F96A8*/ PPC::Runtime::ASM::beq(.L_802FC95C);
/*802FC8AC 002F96AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802FC8B0 002F96B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802FC8B4 002F96B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC8B8 002F96B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC8BC 002F96BC*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*802FC8C0 002F96C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FC8C4 002F96C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC8C8 002F96C8*/ PPC::Runtime::ASM::bctrl();
/*802FC8CC 002F96CC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC8D0 002F96D0*/ PPC::Runtime::ASM::beq(.L_802FC91C);
/*802FC8D4 002F96D4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802FC8D8 002F96D8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC8DC 002F96DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802FC8E0 002F96E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC8E4 002F96E4*/ PPC::Runtime::ASM::beq(.L_802FC91C);
/*802FC8E8 002F96E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802FC8EC 002F96EC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC8F0 002F96F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802FC8F4 002F96F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC8F8 002F96F8*/ PPC::Runtime::ASM::beq(.L_802FC91C);
/*802FC8FC 002F96FC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802FC900 002F9700*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802FC904 002F9704*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802FC908 002F9708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC90C 002F970C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC910 002F9710*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FC914 002F9714*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC918 002F9718*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FC91C, 0x802FC91C) //this is a jump label
/*802FC91C 002F971C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC920 002F9720*/ PPC::Runtime::ASM::beq(.L_802FC95C);
/*802FC924 002F9724*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802FC928 002F9728*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8F18 @ Get_MemoryOffset_HighBit);
/*802FC92C 002F972C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802FC930 002F9730*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FC934 002F9734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC938 002F9738*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8F18 @ Get_MemoryOffset_LowBit);
/*802FC93C 002F973C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC940 002F9740*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802FC944 002F9744*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802FC948 002F9748*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC94C 002F974C*/ PPC::Runtime::ASM::beq(.L_802FC95C);
/*802FC950 002F9750*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*802FC954 002F9754*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*802FC958 002F9758*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802FC95C, 0x802FC95C) //this is a jump label
/*802FC95C 002F975C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802FC960 002F9760*/ PPC::Runtime::ASM::ble(.L_802FC96C);
/*802FC964 002F9764*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FC968 002F9768*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802FC96C, 0x802FC96C) //this is a jump label
/*802FC96C 002F976C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FC970 002F9770*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FC974 002F9774*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FC978 002F9778*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FC97C 002F977C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FC980 002F9780*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FC984 002F9784*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802FC988 002F9788*/ PPC::Runtime::ASM::blr();
}