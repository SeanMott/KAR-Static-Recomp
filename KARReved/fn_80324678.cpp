//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80324678(PPC::Runtime::GCContext* context)
{
/*80324678 00321478*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x140, context->r1));
/*8032467C 0032147C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80324680 00321480*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r1));
/*80324684 00321484*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r1));
/*80324688 00321488*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r1)0, context->qr0);
/*8032468C 0032148C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r1));
/*80324690 00321490*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1)0, context->qr0);
/*80324694 00321494*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*80324698 00321498*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1)0, context->qr0);
/*8032469C 0032149C*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*803246A0 003214A0*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*803246A4 003214A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r1));
/*803246A8 003214A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1));
/*803246AC 003214AC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803246B0 003214B0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803246B4 003214B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803246B8 003214B8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc8);
/*803246BC 003214BC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803246C0 003214C0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4);
/*803246C4 003214C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*803246C8 003214C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803246CC 003214CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*803246D0 003214D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803246D4 003214D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*803246D8 003214D8*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*803246DC 003214DC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*803246E0 003214E0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xd4);
/*803246E4 003214E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*803246E8 003214E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*803246EC 003214EC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*803246F0 003214F0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1));
/*803246F4 003214F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r1));
/*803246F8 003214F8*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*803246FC 003214FC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80324700 00321500*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80324704 00321504*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80324708 00321508*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*8032470C 0032150C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80324710 00321510*/ PPC::Runtime::ASM::bge(.L_80324A2C);
/*80324714 00321514*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80324718 00321518*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xbc);
/*8032471C 0032151C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80324720 00321520*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x4);
/*80324724 00321524*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*80324728 00321528*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8032472C 0032152C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*80324730 00321530*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80324734 00321534*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*80324738 00321538*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*8032473C 0032153C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*80324740 00321540*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xe0);
/*80324744 00321544*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*80324748 00321548*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8032474C 0032154C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*80324750 00321550*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*80324754 00321554*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*80324758 00321558*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8032475C 0032155C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4070 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80324760 00321560*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80324764 00321564*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80324768 00321568*/ PPC::Runtime::ASM::beq(.L_803249F4);
/*8032476C 0032156C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xe0);
/*80324770 00321570*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80324774 00321574*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*80324778 00321578*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8032477C 0032157C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x98);
/*80324780 00321580*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80324784 00321584*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80324788 00321588*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*8032478C 0032158C*/ PPC::Runtime::ASM::fadds(context->f3, context->f2, context->f0);
/*80324790 00321590*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*80324794 00321594*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*80324798 00321598*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*8032479C 0032159C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f3, context->f31);
/*803247A0 003215A0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*803247A4 003215A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803247A8 003215A8*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*803247AC 003215AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803247B0 003215B0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xa4);
/*803247B4 003215B4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*803247B8 003215B8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803247BC 003215BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803247C0 003215C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*803247C4 003215C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4074 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803247C8 003215C8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*803247CC 003215CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*803247D0 003215D0*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*803247D4 003215D4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*803247D8 003215D8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4);
/*803247DC 003215DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*803247E0 003215E0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803247E4 003215E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*803247E8 003215E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xb0);
/*803247EC 003215EC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*803247F0 003215F0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*803247F4 003215F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*803247F8 003215F8*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*803247FC 003215FC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80324800 00321600*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x74);
/*80324804 00321604*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80324808 00321608*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8032480C 0032160C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*80324810 00321610*/ PPC::Runtime::ASM::fadds(context->f3, context->f2, context->f0);
/*80324814 00321614*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*80324818 00321618*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*8032481C 0032161C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80324820 00321620*/ PPC::Runtime::ASM::fsubs(context->f1, context->f3, context->f31);
/*80324824 00321624*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80324828 00321628*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8032482C 0032162C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80324830 00321630*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80324834 00321634*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x80);
/*80324838 00321638*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8032483C 0032163C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80324840 00321640*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80324844 00321644*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80324848 00321648*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4074 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032484C 0032164C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80324850 00321650*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*80324854 00321654*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80324858 00321658*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8032485C 0032165C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4);
/*80324860 00321660*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80324864 00321664*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80324868 00321668*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8032486C 0032166C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8c);
/*80324870 00321670*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*80324874 00321674*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80324878 00321678*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8032487C 0032167C*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*80324880 00321680*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80324884 00321684*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*80324888 00321688*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8032488C 0032168C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x2c);
/*80324890 00321690*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80324894 00321694*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80324898 00321698*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8032489C 0032169C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*803248A0 003216A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803248A4 003216A4*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*803248A8 003216A8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*803248AC 003216AC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*803248B0 003216B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803248B4 003216B4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xe0);
/*803248B8 003216B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803248BC 003216BC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*803248C0 003216C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*803248C4 003216C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803248C8 003216C8*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*803248CC 003216CC*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803248D0 003216D0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4070 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803248D4 003216D4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*803248D8 003216D8*/ PPC::Runtime::ASM::bge(.L_803249F4);
/*803248DC 003216DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xe0);
/*803248E0 003216E0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*803248E4 003216E4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4078 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803248E8 003216E8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*803248EC 003216EC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*803248F0 003216F0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803248F4 003216F4*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*803248F8 003216F8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*803248FC 003216FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*80324900 00321700*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80324904 00321704*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80324908 00321708*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8032490C 0032170C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80324910 00321710*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80324914 00321714*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*80324918 00321718*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8032491C 0032171C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80324920 00321720*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80324924 00321724*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80324928 00321728*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E407C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032492C 0032172C*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80324930 00321730*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80324934 00321734*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80324938 00321738*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8032493C 0032173C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*80324940 00321740*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80324944 00321744*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80324948 00321748*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8032494C 0032174C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80324950 00321750*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80324954 00321754*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80324958 00321758*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8032495C 0032175C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80324960 00321760*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80324964 00321764*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2c);
/*80324968 00321768*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8032496C 0032176C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80324970 00321770*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80324974 00321774*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*80324978 00321778*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8032497C 0032177C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80324980 00321780*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80324984 00321784*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*80324988 00321788*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8032498C 0032178C*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80324990 00321790*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E407C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80324994 00321794*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80324998 00321798*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8032499C 0032179C*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803249A0 003217A0*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*803249A4 003217A4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803249A8 003217A8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*803249AC 003217AC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803249B0 003217B0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803249B4 003217B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803249B8 003217B8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803249BC 003217BC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803249C0 003217C0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803249C4 003217C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803249C8 003217C8*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*803249CC 003217CC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803249D0 003217D0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*803249D4 003217D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803249D8 003217D8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803249DC 003217DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803249E0 003217E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*803249E4 003217E4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803249E8 003217E8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803249EC 003217EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803249F0 003217F0*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
RUNTIME_PPC_JUMP_LABEL(.L_803249F4, 0x803249F4) //this is a jump label
/*803249F4 003217F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*803249F8 003217F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803249FC 003217FC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80324A00 00321800*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80324A04 00321804*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80324A08 00321808*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r12));
/*80324A0C 0032180C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80324A10 00321810*/ PPC::Runtime::ASM::bctrl();
/*80324A14 00321814*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80324A18 00321818*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80324A1C 0032181C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80324A20 00321820*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r12));
/*80324A24 00321824*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80324A28 00321828*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80324A2C, 0x80324A2C) //this is a jump label
/*80324A2C 0032182C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r1)0, context->qr0);
/*80324A30 00321830*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r1));
/*80324A34 00321834*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1)0, context->qr0);
/*80324A38 00321838*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r1));
/*80324A3C 0032183C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1)0, context->qr0);
/*80324A40 00321840*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*80324A44 00321844*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*80324A48 00321848*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*80324A4C 0032184C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r1));
/*80324A50 00321850*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r1));
/*80324A54 00321854*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1));
/*80324A58 00321858*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80324A5C 0032185C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x140);
/*80324A60 00321860*/ PPC::Runtime::ASM::blr();
}